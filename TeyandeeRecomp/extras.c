/*
 * extras.c — Kyatto Ninden Teyandee (TeyandeeRecomp) runner hooks
 *
 * Implements game_extras.h. Layout intentionally mirrors FaxanaduRecomp so
 * text overrides, CHR overrides, and debug/verify modes can grow without
 * reshaping the plugin interface.
 *
 * Locales (EN / RU / future):
 *   locales/en.json, locales/ru.json, …
 *   Select with --lang <code>  or pass an explicit file with --text-overrides.
 *   Encoding registries are stubs until the game's tile maps are RE'd.
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include "override_text.h"
#include "override_chr.h"
#include <SDL.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#endif

/* ---- Watchdog globals (extern'd by runner's debug_server.c) ---- */
int         g_watchdog_triggered = 0;
uint32_t    g_watchdog_frame     = 0;
const char *g_watchdog_stack_dump = "";

/* ROM path exposed by runner for verify / oracle modes */
const char *g_rom_path_for_extras = NULL;

/* ---- Debug ---- */
static int s_debug_enabled = 0;
static int s_tcp_port = 4370;

static void get_exe_relative_path(const char *filename, char *out, int max_len) {
#ifdef _WIN32
    char exe[MAX_PATH];
    DWORD n = GetModuleFileNameA(NULL, exe, MAX_PATH);
    if (n == 0 || n >= MAX_PATH) {
        snprintf(out, (size_t)max_len, "%s", filename);
        return;
    }
    char *slash = strrchr(exe, '\\');
    if (slash) *slash = '\0';
    snprintf(out, (size_t)max_len, "%s\\%s", exe, filename);
#else
    snprintf(out, (size_t)max_len, "%s", filename);
#endif
}

static int check_debug_ini(void) {
    char path[512];
    get_exe_relative_path("debug.ini", path, sizeof(path));
    FILE *f = fopen(path, "r");
    if (f) { fclose(f); return 1; }
    return 0;
}

/* =========================================================================
 * Text override — encodings + locale selection
 *
 * TEYANDEE_* encoders are placeholders. Once dialogue/title tile maps are
 * recovered from the ROM (Ghidra + CHR), replace these with real mappings
 * and keep the JSON locale files as the only data source for translators.
 * ====================================================================== */

/* Identity ASCII — useful for prototype patches and tools until real
 * font encoding is known. Unencodable chars return 0xFF. */
static uint8_t teyandee_ascii_encode(char ch) {
    if (ch >= 0x20 && ch <= 0x7E) return (uint8_t)ch;
    return 0xFF;
}

/* Dialogue placeholder — same as ASCII for now; terminator differs (0xFF)
 * so JSON can already target dialogue-style strings. */
static uint8_t teyandee_dialogue_encode(char ch) {
    if (ch >= 0x20 && ch <= 0x7E) return (uint8_t)ch;
    if (ch == '\n') return 0xFE; /* provisional line-break token */
    return 0xFF;
}

/* Menu / HUD placeholder — null-terminated short labels. */
static uint8_t teyandee_menu_encode(char ch) {
    if (ch >= 0x20 && ch <= 0x7E) return (uint8_t)ch;
    return 0xFF;
}

static char s_text_overrides_path[512] = "";
static int  s_text_overrides_enabled = 0;
static char s_lang[16] = ""; /* empty = off unless path set */

static void text_override_setup(void) {
    text_override_init();

    /* Register encodings referenced by locales/*.json.
     * Names are stable API for translators — do not rename lightly. */
    text_override_register_encoding("TEYANDEE_ASCII",    teyandee_ascii_encode,    0x00);
    text_override_register_encoding("TEYANDEE_MENU",     teyandee_menu_encode,     0x00);
    text_override_register_encoding("TEYANDEE_DIALOGUE", teyandee_dialogue_encode, 0xFF);
    /* Generic aliases so shared tools can target either name */
    text_override_register_encoding("ASCII",             teyandee_ascii_encode,    0x00);

    text_override_load_json(s_text_overrides_path);
}

/* Resolve locale code → locales/<code>.json next to the exe. */
static int resolve_lang_path(const char *lang, char *out, int max_len) {
    char rel[64];
    snprintf(rel, sizeof(rel), "locales\\%s.json", lang);
    get_exe_relative_path(rel, out, max_len);
    FILE *f = fopen(out, "r");
    if (f) { fclose(f); return 1; }
    /* CWD fallback (dev launches from project root) */
    snprintf(out, (size_t)max_len, "locales/%s.json", lang);
    f = fopen(out, "r");
    if (f) { fclose(f); return 1; }
    return 0;
}

/* ---- CHR override (opt-in) ---- */
static char s_chr_overrides_dir[512] = "tiles";
static char s_tile_compile_dir[512] = "";
static int  s_tile_compile = 0;
static int  s_chr_dump = 0;
static int  s_chr_enabled = 0;
static int  s_chr_overrides_set = 0;

/* =========================================================================
 * game_extras.h implementation
 * ====================================================================== */

/* Headerless CRC32 of Cat Ninden Teyandee (Japan).nes */
uint32_t game_get_expected_crc32(void) { return 0x45878D7Fu; }

const char *game_get_name(void) { return "Kyatto Ninden Teyandee"; }

void game_on_init(void) {
    if (s_tile_compile) {
        int n = chr_override_compile_dir(s_tile_compile_dir);
        printf("[ChrOverride] Compiled %d PNGs in %s\n", n, s_tile_compile_dir);
        exit(0);
    }

    /* --lang and --text-overrides both enable the plugin */
    if (!s_text_overrides_enabled && s_lang[0]) {
        if (resolve_lang_path(s_lang, s_text_overrides_path, sizeof(s_text_overrides_path))) {
            s_text_overrides_enabled = 1;
            printf("[TextOverride] Language \"%s\" → %s\n", s_lang, s_text_overrides_path);
        } else {
            fprintf(stderr, "[TextOverride] No locale file for lang \"%s\" "
                            "(expected locales/%s.json)\n", s_lang, s_lang);
        }
    }

    if (s_text_overrides_enabled)
        text_override_setup();

    if (!s_chr_enabled) {
        char tiles_manifest[512];
        get_exe_relative_path("tiles/manifest.json", tiles_manifest, sizeof(tiles_manifest));
        FILE *tf = fopen(tiles_manifest, "r");
        if (tf) {
            fclose(tf);
            s_chr_enabled = 1;
            s_chr_overrides_set = 1;
            get_exe_relative_path("tiles", s_chr_overrides_dir, sizeof(s_chr_overrides_dir));
            printf("[ChrOverride] Auto-detected tiles/manifest.json\n");
        }
    }

    if (s_chr_enabled) {
        chr_override_init();
        if (s_chr_dump)
            chr_override_set_dump(1);
        if (s_chr_overrides_set)
            chr_override_load_manifest(s_chr_overrides_dir);
    }

    s_debug_enabled = check_debug_ini();
    if (s_debug_enabled) {
        printf("[Debug] debug.ini found — TCP server enabled\n");
        debug_server_init(s_tcp_port);
    }
}

void game_on_frame(uint64_t frame_count) {
    (void)frame_count;
    if (s_debug_enabled) {
        debug_server_poll();
        debug_server_wait_if_paused();
        int ovr = debug_server_get_input_override();
        if (ovr >= 0)
            g_controller1_buttons = (uint8_t)ovr;
    }

    if (s_text_overrides_enabled) {
        text_override_reload_if_changed();
        text_override_apply();
    }

    if (s_chr_enabled)
        chr_override_reload_if_changed();
}

void game_post_nmi(uint64_t frame_count) {
    (void)frame_count;
    /* Teyandee uses MMC3 scanline IRQs for HUD / cutscene splits — never
     * sprite-0. The runner's legacy $2002 pulse path can still set
     * g_spr0_split_active when OAM[0] is on-screen, forcing a false HUD
     * scroll split (stale 0,0) and a one-line / intermittent seam in
     * gameplay and cutscenes. Clear it every frame after NMI, before render. */
    g_spr0_split_active = 0;
    g_spr0_reads_ctr_legacy = 0;
    g_spr0_split_write_scanline = -1;

    if (s_chr_enabled)
        chr_override_frame_end();
    if (s_debug_enabled)
        debug_server_record_frame();
}

int game_handle_arg(const char *key, const char *val) {
    if (strcmp(key, "--lang") == 0 && val) {
        strncpy(s_lang, val, sizeof(s_lang) - 1);
        s_lang[sizeof(s_lang) - 1] = '\0';
        /* Normalize: "EN" → "en" */
        for (char *p = s_lang; *p; p++) {
            if (*p >= 'A' && *p <= 'Z') *p = (char)(*p - 'A' + 'a');
        }
        printf("[TextOverride] Language requested: %s\n", s_lang);
        return 1;
    }
    if (strcmp(key, "--text-overrides") == 0 && val) {
        strncpy(s_text_overrides_path, val, sizeof(s_text_overrides_path) - 1);
        s_text_overrides_path[sizeof(s_text_overrides_path) - 1] = '\0';
        s_text_overrides_enabled = 1;
        printf("[TextOverride] Override path set to \"%s\"\n", val);
        return 1;
    }
    if (strcmp(key, "--tile-dump") == 0) {
        s_chr_dump = 1;
        s_chr_enabled = 1;
        printf("[ChrOverride] Tile dump enabled\n");
        return 1;
    }
    if (strcmp(key, "--tiles") == 0 && val) {
        strncpy(s_chr_overrides_dir, val, sizeof(s_chr_overrides_dir) - 1);
        s_chr_overrides_dir[sizeof(s_chr_overrides_dir) - 1] = '\0';
        s_chr_enabled = 1;
        s_chr_overrides_set = 1;
        printf("[ChrOverride] Tile dir set to \"%s\"\n", val);
        return 1;
    }
    if (strcmp(key, "--tile-compile") == 0 && val) {
        strncpy(s_tile_compile_dir, val, sizeof(s_tile_compile_dir) - 1);
        s_tile_compile_dir[sizeof(s_tile_compile_dir) - 1] = '\0';
        s_tile_compile = 1;
        printf("[ChrOverride] Tile compile dir: \"%s\"\n", val);
        return 1;
    }
    if (strcmp(key, "--tcp-port") == 0 && val) {
        s_tcp_port = atoi(val);
        printf("[Debug] TCP port set to %d\n", s_tcp_port);
        return 1;
    }
    return 0;
}

const char *game_arg_usage(void) {
    return
        "  --lang CODE              Load locales/<code>.json (en, ru, …)\n"
        "  --text-overrides PATH    Explicit JSON override table (implies text plugin)\n"
        "  --tile-dump              Dump unique CHR transfers as PNGs to tiles/\n"
        "  --tiles DIR              Path to tile override directory (default: ./tiles)\n"
        "  --tile-compile DIR       Batch convert PNGs in DIR to .chr.bin cache files\n"
        "  --tcp-port PORT          TCP debug server port (default 4370)\n";
}

void game_run_nmi(void) {
    extern void func_NMI(void);
    func_NMI();
}

void game_run_main(void) {
    extern void func_RESET(void);
    func_RESET();
}

int game_dispatch_override(uint16_t addr) { (void)addr; return 0; }

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

void game_fill_frame_record(void *record) {
    /* Populated once the RAM map is reverse-engineered (mode, stage, HP…). */
    (void)record;
}

void game_post_render(uint32_t *framebuf) { (void)framebuf; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)cmd; (void)id; (void)json;
    return 0;
}
