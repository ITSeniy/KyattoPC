@echo off
setlocal enabledelayedexpansion

set "REPO=https://github.com/mstan/nesrecomp.git"
set "LOCAL_NESRECOMP=..\nesrecomp-master"

:: Prefer a local workspace copy (zip / sibling folder) when present
if not exist "nesrecomp" (
    if exist "%LOCAL_NESRECOMP%\runner\runner.cmake" (
        echo Linking local nesrecomp: %LOCAL_NESRECOMP%
        mklink /J nesrecomp "%LOCAL_NESRECOMP%"
        if errorlevel 1 (
            echo Failed to create junction. Run this script from an elevated cmd
            echo or Developer PowerShell, or clone manually.
            exit /b 1
        )
        echo Created junction: nesrecomp -^> %LOCAL_NESRECOMP%
    ) else (
        echo Cloning nesrecomp from GitHub...
        git clone --recurse-submodules %REPO% nesrecomp
        if errorlevel 1 exit /b 1
    )
)

:: If this is a real git checkout and pin has sha=, check it out
set "SHA="
for /f "usebackq tokens=1,* delims==" %%a in ("nesrecomp.pin") do (
    set "key=%%a"
    set "key=!key: =!"
    if "!key!"=="sha" (
        set "SHA=%%b"
        set "SHA=!SHA: =!"
    )
)
if defined SHA if exist "nesrecomp\.git" (
    echo Checking out pinned nesrecomp %SHA% ...
    git -C nesrecomp checkout %SHA%
    git -C nesrecomp submodule update --init --recursive
)

:: nestopia-core junction for optional oracle builds
if not exist "nestopia-core" (
    if exist "nesrecomp\runner\nestopia-core" (
        mklink /J nestopia-core nesrecomp\runner\nestopia-core
        echo Created junction: nestopia-core -^> nesrecomp\runner\nestopia-core
    )
)

echo.
echo Ready.
echo   ROM: place "Cat Ninden Teyandee (Japan).nes" next to this folder or pass path on CLI
echo   Next:
echo     1. Build recompiler:  cmake -S nesrecomp\recompiler -B build_recomp -G "Visual Studio 18 2026" -A x64
echo                           cmake --build build_recomp --config Release
echo     2. Recompile ROM:     build_recomp\Release\NESRecomp.exe "..\Cat Ninden Teyandee (Japan).nes" --game game.toml
echo     3. Build game:        cmake -S . -B build -G "Visual Studio 18 2026" -A x64
echo                           cmake --build build --config Release
echo     (Use "Visual Studio 17 2022" if that is your installed generator.)
