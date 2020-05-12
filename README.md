# C-Code-Obfuscator
#### Developed by: Sam "Alice" Blair, Winston Howard, Chance Sweetser
## Summary
Developed and run in Visual Studio Code, this is a basic python program to obfuscate C/C++ files. Obfuscates all variables and functions, removes comments, and removes all whitespaces except after functions, variables, and imports.<br>
***
## Requirements for Option 2
You have been asked to write a C or C++ code obfuscator - you may use any language you want. Your job is to take existing C or C++ code and obfuscate all variable values and data structures. <br>
- [x] Develop Phase [100]:
	- [x] Part one of the develop phase [50]:<br>
			For this part you should consider encoding strategies of the data. You may also want to embed validation in case someone is able to figure out your encoding (e.g. redundancy checks to detect tampering?).
	- [x] Part two of the develop phase [50]:<br>
			Develop a mechanism that would obfuscate more complex data structures and possibly even logic structures. E.g. arrays, switch statements, etc.

- [x] Attack Phase [50]:<br>
		Using any and all of the tools you have seen in this class, dissect code that you have obfuscated using your software. Identify everything you can.

- [x] WriteUp/Submission [50]:<br>
		Document your development and design choices, include the dissection and reverse engineering of a sample program. Address the strengths and weaknesses of your software and how you would iterate and make your program more effective at obfuscation.<br>
You must use version control, include me,and:<br>
	- [x] 5 pts  describe program:requirements, installation, usage - [see here](https://github.com/whoward3/C-Code-Obfuscator/blob/master/README.md)
	- [x] 10 pts  documentation of design choices - [see here](https://github.com/whoward3/C-Code-Obfuscator/blob/master/DESIGN.md)
	- [x] 10 pts  documentation of your dissection and analysis - [see here](https://github.com/whoward3/C-Code-Obfuscator/blob/master/ANALYSIS.md)
	- [x] 25 pts  reflection of the strengths, weaknesses, and future changes - [see here](https://github.com/whoward3/C-Code-Obfuscator/blob/master/NOP.md)
***
## Installation and Usage
This python code is run in VS code, so if need be make sure python 3.7 is installed. In when you run it, give it the C/C++ file you like to obfuscate and it will genereate a obfuscated version of the original file. This was done so the user wishing to obfuscate can retain their orignal code and have an obfuscated version. The user can then rename the cpp file to whatever they wish. 
***
## Sample Usages:
### Before anything happens

<img src = "https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/Example1Photo1.png" width = "400"> <br>

### After of an obfuscated C/C++ file with the comments removed.

<img src = "https://github.com/whoward3/C-Code-Obfuscator/blob/master/assets/comment_remover_after.png?raw=true" width = "400"> <br>

### After of an obfuscated C/C++ file with functions and variables renamed to a random string.

<img src = "https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/Example1Photo2.png" width = "700"><br>

### After of an obfuscated C/C++ file with whitespaces removed, excluding after functions, variables, and imports.

<img src = "https://github.com/whoward3/C-Code-Obfuscator/blob/master/assets/whitespace_remover_after.png?raw=true" width = "700"><br>

### After of an obfuscated C/C++ file with all 3 types of obfuscation used.

<img src = "https://github.com/whoward3/C-Code-Obfuscator/blob/master/assets/all_3_after_picture.png?raw=true" width = "700"><br>


