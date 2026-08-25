-- Attribute selected FCEUX WRAM writes to movie frame and 6502 PC.
-- Environment:
--   TEYANDEE_FCEUX_WRITE_TRACE=<output.jsonl>
--   TEYANDEE_FCEUX_WRITE_WATCH=0x007e,0x0083,0x0402
--   TEYANDEE_FCEUX_FRAMES=160   (optional; defaults to movie length)

local output_path = os.getenv("TEYANDEE_FCEUX_WRITE_TRACE")
local watch_text = os.getenv("TEYANDEE_FCEUX_WRITE_WATCH")
if not output_path or output_path == "" then
    error("TEYANDEE_FCEUX_WRITE_TRACE is not set")
end
if not watch_text or watch_text == "" then
    error("TEYANDEE_FCEUX_WRITE_WATCH is not set")
end

local watched = {}
for token in string.gmatch(watch_text, "[^,%s]+") do
    local address
    if string.sub(token, 1, 2) == "0x" or string.sub(token, 1, 2) == "0X" then
        address = tonumber(string.sub(token, 3), 16)
    else
        address = tonumber(token)
    end
    if not address then
        error("invalid watched address: " .. token)
    end
    watched[#watched + 1] = address % 0x0800
end

local out = assert(io.open(output_path, "w"))
local last_event = nil
local function log_write(address, size, value)
    address = tonumber(address) or 0
    value = tonumber(value) or memory.readbyte(address)
    local pc = 0
    if memory.getregister then
        local ok, result = pcall(memory.getregister, "pc")
        if ok and result then pc = result end
    end
    local cycles = 0
    if debugger and debugger.getcyclescount then
        local ok, result = pcall(debugger.getcyclescount)
        if ok and result then cycles = result end
    end
    local event = string.format(
        '{"f":%d,"cyc":%d,"adr":"0x%04x","val":"0x%02x","pc":"0x%04x"}\n',
        movie.framecount(), cycles, address, value, pc
    )
    -- Some FCEUX configurations simulate a frame more than once. Suppress an
    -- immediately repeated hook without collapsing legitimate later writes.
    if event == last_event then return end
    last_event = event
    out:write(event)
    out:flush()
end

local function on_write(address, size, value)
    local ok, message = pcall(log_write, address, size, value)
    if not ok then
        out:write(string.format('{"error":%q}\n', tostring(message)))
        out:flush()
    end
end

for _, address in ipairs(watched) do
    memory.registerwrite(address, on_write)
end

emu.speedmode("maximum")
local length = movie.length()
local requested_length = tonumber(os.getenv("TEYANDEE_FCEUX_FRAMES") or "")
if requested_length and requested_length > 0 and requested_length < length then
    length = math.floor(requested_length)
end

for _ = 1, length do
    emu.frameadvance()
end

for _, address in ipairs(watched) do
    memory.registerwrite(address, nil)
end
out:close()
emu.exit()
