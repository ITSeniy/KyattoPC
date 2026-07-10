@echo off
setlocal
set "GHIDRA_HOME=C:\Users\ITSeniy\ghidra_12.1.2_PUBLIC"
set "PROJ_DIR=%~dp0..\ghidra"
set "PROJ_NAME=teyandee_nesrecomp"
set "BANK07=%~dp0..\banks\bank07.bin"
set "SCRIPT_DIR=%~dp0"

if not exist "%BANK07%" (
  echo Missing %BANK07% — run: python tools\extract_banks.py ^<rom^>
  exit /b 1
)
if not exist "%GHIDRA_HOME%\support\analyzeHeadless.bat" (
  echo analyzeHeadless not found under %GHIDRA_HOME%
  exit /b 1
)

mkdir "%PROJ_DIR%" 2>nul

echo [1/2] Importing bank07 @ 0xC000 ...
call "%GHIDRA_HOME%\support\analyzeHeadless.bat" ^
  "%PROJ_DIR%" "%PROJ_NAME%" ^
  -import "%BANK07%" ^
  -loader BinaryLoader ^
  -loader-baseAddr 0xC000 ^
  -loader-blockName rom ^
  -processor "6502:LE:16:default" ^
  -overwrite
if errorlevel 1 exit /b 1

echo [2/2] Labeling boot/NMI/IRQ/MMC3 symbols ...
call "%GHIDRA_HOME%\support\analyzeHeadless.bat" ^
  "%PROJ_DIR%" "%PROJ_NAME%" ^
  -process bank07.bin ^
  -noanalysis ^
  -scriptPath "%SCRIPT_DIR%" ^
  -postScript TeyandeeLabelBoot.java
if errorlevel 1 exit /b 1

echo.
echo Done. Open in Ghidra:
echo   %GHIDRA_HOME%\ghidraRun.bat
echo   File -^> Open Project -^> %PROJ_DIR%\%PROJ_NAME%.gpr
echo   Double-click bank07.bin
echo   Go To: FF90 / C4FA / FC22
endlocal
