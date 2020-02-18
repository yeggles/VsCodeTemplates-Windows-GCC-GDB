Requirements:
	- Visual Studio Code:  https://code.visualstudio.com/docs/?dv=win64user
	- MinGW:  https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win32/Personal%20Builds/mingw-builds/installer/mingw-w64-install.exe/download

Setup instructions:
	- Rename the "HelloWorld" folder
	- Update test.code-workspace "folders" parameter to match
	- Update the following parameters with your MinGW installation location:
		- test.code-workspace:  "C_Cpp.default.compilerPath"
		- <your project folder name>/.vscode/launch.json:  "miDebuggerPath"
		- <your project folder name>/.vscode/tasks.json:  "command"

References:
	https://code.visualstudio.com/docs/cpp/config-mingw

Notes:
	If STL container elements are not visable in the GDB debugger, then pretty printing isn't working.  I attempted to use a previous install of MinGW (has GDB) on my computer and I ran into this issue.  You can test this by opening "HelloWorld.cpp", step in the debugger until after the "msgVector" has been initialized, and view the contents by either hover over the variable.  If you can see that the vector has 2 elements ("Hello", "World") then the pretty printing features is working properly.  I provided the MinGW install I used to get this feature working.

My Visual Studio Code:
	Version: 1.42.1 (user setup)
	
Commit: c47d83b293181d9be64f27ff093689e8e7aed054

	Date: 2020-02-11T14:45:59.656Z

	Electron: 6.1.6
	
Chrome: 76.0.3809.146

	Node.js: 12.4.0
	
V8: 7.6.303.31-electron.0
	
OS: Windows_NT x64 10.0.17134