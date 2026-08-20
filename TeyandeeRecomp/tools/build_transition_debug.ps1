[CmdletBinding()]
param(
    [string]$Rom = "",
    [ValidateSet("Debug", "RelWithDebInfo", "Release")]
    [string]$Configuration = "RelWithDebInfo",
    [string]$Generator = ""
)

$ErrorActionPreference = "Stop"
$projectRoot = Split-Path -Parent $PSScriptRoot
$workspaceRoot = Split-Path -Parent $projectRoot

if (-not $Rom) {
    $Rom = Join-Path $workspaceRoot "Cat Ninden Teyandee (Japan).nes"
}
$Rom = (Resolve-Path -LiteralPath $Rom).Path

$recompilerCandidates = @(
    (Join-Path $projectRoot "build_recomp_ninja\NESRecomp.exe"),
    (Join-Path $projectRoot "build_recomp\Release\NESRecomp.exe")
)
$recompiler = $recompilerCandidates |
    Where-Object { Test-Path -LiteralPath $_ } |
    Select-Object -First 1
if (-not $recompiler) {
    throw "NESRecomp.exe is missing. Build it first as described in README.md."
}

$cmakeCommand = Get-Command cmake -ErrorAction SilentlyContinue
$cmake = if ($cmakeCommand) { $cmakeCommand.Source } else { $null }
$normalCache = Join-Path $projectRoot "build\CMakeCache.txt"
if ((-not $cmake) -and (Test-Path -LiteralPath $normalCache)) {
    $cmakeLine = Get-Content -LiteralPath $normalCache |
        Where-Object { $_ -like "CMAKE_COMMAND:INTERNAL=*" } |
        Select-Object -First 1
    if ($cmakeLine) {
        $cachedCmake = $cmakeLine.Substring("CMAKE_COMMAND:INTERNAL=".Length)
        if (Test-Path -LiteralPath $cachedCmake) {
            $cmake = $cachedCmake
        }
    }
}
if (-not $cmake) {
    $vsCmakeCandidates = @(
        "$env:ProgramFiles\Microsoft Visual Studio\18\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\17\Community\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe",
        "$env:ProgramFiles\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"
    )
    $cmake = $vsCmakeCandidates |
        Where-Object { Test-Path -LiteralPath $_ } |
        Select-Object -First 1
}
if (-not $cmake) {
    throw "cmake.exe was not found in PATH, the normal build cache, or Visual Studio."
}

# VS-bundled CMake may be callable from a normal PowerShell while cl.exe is
# not. Enter the matching developer shell before configuration in that case.
$cmakeFsPath = $cmake -replace '/', '\'
if ((-not (Get-Command cl.exe -ErrorAction SilentlyContinue)) -and
    ($cmake -like "*Microsoft Visual Studio*")) {
    $vsInstall = $null
    $vsRootMatch = [regex]::Match(
        $cmakeFsPath,
        '^(.*?Microsoft Visual Studio\\[^\\]+\\[^\\]+)\\'
    )
    if ($vsRootMatch.Success) {
        $vsInstall = $vsRootMatch.Groups[1].Value
    }
    $devShellModule = if ($vsInstall) {
        Join-Path $vsInstall "Common7\Tools\Microsoft.VisualStudio.DevShell.dll"
    } else {
        $null
    }
    if ((-not $devShellModule) -or (-not (Test-Path -LiteralPath $devShellModule))) {
        throw "Visual Studio DevShell module was not found for CMake at $cmake"
    }
    Import-Module $devShellModule
    Enter-VsDevShell -VsInstallPath $vsInstall -SkipAutomaticLocation `
        -DevCmdArguments "-arch=x64 -host_arch=x64" | Out-Null
}

if ((-not $Generator) -and (Test-Path -LiteralPath $normalCache)) {
    $generatorLine = Get-Content -LiteralPath $normalCache |
        Where-Object { $_ -like "CMAKE_GENERATOR:INTERNAL=*" } |
        Select-Object -First 1
    if ($generatorLine) {
        $Generator = $generatorLine.Substring("CMAKE_GENERATOR:INTERNAL=".Length)
    }
}

$ninja = $null
if ((-not $Generator -or $Generator -like "Visual Studio*") -and
    ($cmake -like "*Microsoft Visual Studio*") -and
    (Get-Command cl.exe -ErrorAction SilentlyContinue)) {
    $cmakeProductRoot = Split-Path -Parent (
        Split-Path -Parent (Split-Path -Parent $cmakeFsPath)
    )
    $ninjaCandidate = Join-Path $cmakeProductRoot "Ninja\ninja.exe"
    if (Test-Path -LiteralPath $ninjaCandidate) {
        # The VS 18 IDE generator fails compiler discovery on this setup;
        # bundled Ninja plus the activated cl.exe is deterministic.
        $Generator = "Ninja"
        $ninja = $ninjaCandidate
    }
}

$stageRoot = Join-Path $projectRoot "build_transition_debug"
$generatedDir = Join-Path $stageRoot "generated"
$nativeBuild = if ($Generator -eq "Ninja") {
    Join-Path $stageRoot "native_ninja"
} else {
    Join-Path $stageRoot "native"
}
New-Item -ItemType Directory -Force -Path $generatedDir | Out-Null

Write-Host "[transition-debug] Generating instrumented C into $generatedDir"
Push-Location $stageRoot
try {
    & $recompiler $Rom --game (Join-Path $projectRoot "game.toml") --reverse-debug
    if ($LASTEXITCODE -ne 0) {
        throw "NESRecomp --reverse-debug failed with exit code $LASTEXITCODE"
    }
}
finally {
    Pop-Location
}

Write-Host "[transition-debug] Configuring isolated native build"
$configureArgs = @(
    "-S", $projectRoot,
    "-B", $nativeBuild,
    "-DNESRECOMP_REVERSE_DEBUG=ON",
    "-DENABLE_NESTOPIA_ORACLE=OFF",
    "-DTEYANDEE_GENERATED_DIR=$generatedDir"
)
if ($Generator) {
    $configureArgs += @("-G", $Generator)
    if ($Generator -like "Visual Studio*") {
        $configureArgs += @("-A", "x64")
    } elseif ($Generator -eq "Ninja") {
        if ($ninja) {
            $configureArgs += "-DCMAKE_MAKE_PROGRAM=$ninja"
        }
        $configureArgs += @(
            "-DCMAKE_C_COMPILER=cl",
            "-DCMAKE_CXX_COMPILER=cl",
            "-DCMAKE_BUILD_TYPE=$Configuration"
        )
    }
}
& $cmake @configureArgs
if ($LASTEXITCODE -ne 0) {
    throw "CMake configure failed with exit code $LASTEXITCODE"
}

Write-Host "[transition-debug] Building $Configuration"
& $cmake --build $nativeBuild --config $Configuration
if ($LASTEXITCODE -ne 0) {
    throw "CMake build failed with exit code $LASTEXITCODE"
}

$exeCandidates = @(
    (Join-Path $nativeBuild "$Configuration\TeyandeeRecomp.exe"),
    (Join-Path $nativeBuild "TeyandeeRecomp.exe")
)
$exe = $exeCandidates | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
if (-not $exe) {
    throw "Build succeeded but TeyandeeRecomp.exe was not found under $nativeBuild"
}

# The game-specific extras hook enables the TCP server when this file exists.
New-Item -ItemType File -Force -Path (Join-Path (Split-Path -Parent $exe) "debug.ini") | Out-Null

Write-Host ""
Write-Host "Reverse-debug executable: $exe"
Write-Host "Launch game:"
Write-Host "  & `"$exe`" `"$Rom`""
Write-Host "Then attach monitor from another terminal:"
Write-Host "  & `"$PSScriptRoot\run_transition_debug.ps1`" -Output `"$stageRoot\transition-report.json`""
