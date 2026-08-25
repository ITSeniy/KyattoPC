-- Export the complete 2 KiB NES internal RAM after every movie frame.
-- Run with FCEUX 2.2.2:
--   fceux.exe -playmovie movie.fm2 -readonly 1 -lua fceux_tas_trace.lua game.nes
-- Set TEYANDEE_FCEUX_TRACE to the desired output path first.

local output_path = os.getenv("TEYANDEE_FCEUX_TRACE")
if not output_path or output_path == "" then
    error("TEYANDEE_FCEUX_TRACE is not set")
end

local function u32le(value)
    return string.char(
        value % 256,
        math.floor(value / 256) % 256,
        math.floor(value / 65536) % 256,
        math.floor(value / 16777216) % 256
    )
end

local function ram_string()
    local ram = memory.readbyterange(0x0000, 0x0800)
    if type(ram) == "string" then
        return ram
    end

    -- Older Lua builds may expose the range as a byte table.
    local chunks = {}
    for base = 0, 0x07FF, 256 do
        local bytes = {}
        for offset = 0, 255 do
            bytes[offset + 1] = string.char(ram[base + offset] or 0)
        end
        chunks[#chunks + 1] = table.concat(bytes)
    end
    return table.concat(chunks)
end

local out = assert(io.open(output_path, "wb"))
out:write("FRT1", u32le(1), u32le(0x0800), u32le(0x0804))

emu.speedmode("maximum")
local length = movie.length()
local requested_length = tonumber(os.getenv("TEYANDEE_FCEUX_FRAMES") or "")
if requested_length and requested_length > 0 and requested_length < length then
    length = math.floor(requested_length)
end
print(string.format("[TAS trace] %d frames -> %s", length, output_path))

for _ = 1, length do
    emu.frameadvance()
    out:write(u32le(movie.framecount()), ram_string())
end

out:close()
print("[TAS trace] complete")
emu.exit()
