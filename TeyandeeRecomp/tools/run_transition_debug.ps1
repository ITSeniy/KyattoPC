[CmdletBinding()]
param(
    [string]$Output = "",
    [string]$HostName = "127.0.0.1",
    [int]$Port = 4370,
    [switch]$Resume
)

$ErrorActionPreference = "Stop"
$projectRoot = Split-Path -Parent $PSScriptRoot
if (-not $Output) {
    $Output = Join-Path $projectRoot "build_transition_debug\transition-report.json"
}

$pythonCommand = Get-Command python -ErrorAction SilentlyContinue
$python = if ($pythonCommand) { $pythonCommand.Source } else { $null }
if (-not $python) {
    $bundledPython = Join-Path $env:USERPROFILE ".cache\codex-runtimes\codex-primary-runtime\dependencies\python\python.exe"
    if (Test-Path -LiteralPath $bundledPython) {
        $python = $bundledPython
    }
}
if (-not $python) {
    throw "Python 3 was not found in PATH or the bundled Codex runtime."
}

$arguments = @(
    (Join-Path $PSScriptRoot "transition_debug.py"),
    "--host", $HostName,
    "--port", $Port,
    "--output", $Output
)
if ($Resume) {
    $arguments += "--resume"
}

& $python @arguments
exit $LASTEXITCODE
