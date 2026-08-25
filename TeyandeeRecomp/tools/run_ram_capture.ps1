[CmdletBinding()]
param(
    [string]$Rom = "",
    [string]$Executable = "",
    [string]$OutputRoot = "",
    [int]$Port = 4371,
    [int]$SampleStep = 10,
    [switch]$NoScreenshots,
    [switch]$LeaveRunning,
    [switch]$TerminalMarkers,
    [switch]$TraceWrites
)

$ErrorActionPreference = "Stop"
$projectRoot = Split-Path -Parent $PSScriptRoot
$repoRoot = Split-Path -Parent $projectRoot

if (-not $Rom) {
    $Rom = Join-Path $repoRoot "Cat Ninden Teyandee (Japan).nes"
}
if (-not (Test-Path -LiteralPath $Rom -PathType Leaf)) {
    throw "ROM was not found: $Rom"
}
$romPath = (Resolve-Path -LiteralPath $Rom).Path

if (-not $Executable) {
    $candidates = @(
        (Join-Path $projectRoot "build_release_ninja\TeyandeeRecomp.exe"),
        (Join-Path $projectRoot "build\Release\TeyandeeRecomp.exe"),
        (Join-Path $projectRoot "build\TeyandeeRecomp.exe")
    )
    $Executable = $candidates | Where-Object { Test-Path -LiteralPath $_ -PathType Leaf } |
        Select-Object -First 1
}
if (-not $Executable -or -not (Test-Path -LiteralPath $Executable -PathType Leaf)) {
    throw "TeyandeeRecomp.exe was not found. Build the game or pass -Executable."
}
$exePath = (Resolve-Path -LiteralPath $Executable).Path

if (-not $OutputRoot) {
    $OutputRoot = Join-Path $projectRoot "captures"
}
$timestamp = Get-Date -Format "yyyyMMdd-HHmmss"
$sessionDir = Join-Path $OutputRoot "ram-$timestamp"
New-Item -ItemType Directory -Path $sessionDir -Force | Out-Null
$sessionDir = (Resolve-Path -LiteralPath $sessionDir).Path
$inputRecord = Join-Path $sessionDir "input.txt"

$pythonCommand = Get-Command python -ErrorAction SilentlyContinue
$python = if ($pythonCommand) { $pythonCommand.Source } else { $null }
if (-not $python) {
    $bundledPython = Join-Path $env:USERPROFILE ".cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe"
    if (Test-Path -LiteralPath $bundledPython -PathType Leaf) {
        $python = $bundledPython
    }
}
if (-not $python) {
    throw "Python 3 was not found in PATH or the bundled Codex runtime."
}

function ConvertTo-ProcessArgument([string]$Value) {
    return '"' + $Value.Replace('"', '\"') + '"'
}

$gameArguments = @(
    (ConvertTo-ProcessArgument $romPath),
    "--record", (ConvertTo-ProcessArgument $inputRecord),
    "--debug-server",
    "--tcp-port", $Port
) -join " "

Write-Host "RAM capture session"
Write-Host "  executable: $exePath"
Write-Host "  ROM:        $romPath"
Write-Host "  output:     $sessionDir"
Write-Host "  TCP port:   $Port"
Write-Host ""

# This window must be visible: the launched process is the game the user will
# interact with while the current terminal collects marker names.
$game = Start-Process -FilePath $exePath -ArgumentList $gameArguments `
    -WorkingDirectory (Split-Path -Parent $exePath) -PassThru

$captureArguments = @(
    (Join-Path $PSScriptRoot "ram_capture.py"),
    "--host", "127.0.0.1",
    "--port", $Port,
    "--output", $sessionDir,
    "--input-record", $inputRecord,
    "--sample-step", $SampleStep
)
if ($NoScreenshots) {
    $captureArguments += "--no-screenshots"
}
if ($LeaveRunning) {
    $captureArguments += "--leave-running"
}
if ($TerminalMarkers) {
    $captureArguments += "--terminal-markers"
}
if ($TraceWrites) {
    $captureArguments += "--trace-writes"
}

try {
    & $python @captureArguments
    $captureExitCode = $LASTEXITCODE
} finally {
    $game.Refresh()
    if (-not $game.HasExited) {
        Write-Warning "The game process is still running (PID $($game.Id)). Close it manually when finished."
    }
}

Write-Host ""
Write-Host "Capture artifacts: $sessionDir"
exit $captureExitCode
