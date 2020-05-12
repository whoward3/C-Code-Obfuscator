# C-Code-Obfuscator
Developed and run in Visual Studio Code, this is a basic python program to obfuscate c++ files. Obfuscates all variables and functions and removes all whitespaces except after functions, variables, and imports.<br>
***
## Requirements for Option 2
You have been asked to write a C or C++ code obfuscator - you may use any language you want. Your job is to take existing C or C++ code and obfuscate all variable values and data structures. <br>
- [ ] Develop Phase [100]:
	- [ ] Part one of the develop phase [50]:<br>
			For this part you should consider encoding strategies of the data. You may also want to embed validation in case someone is able to figure out your encoding (e.g. redundancy checks to detect tampering?).
	- [ ] Part two of the develop phase [50]:<br>
			Develop a mechanism that would obfuscate more complex data structures and possibly even logic structures. E.g. arrays, switch statements, etc.

- [ ] Attack Phase [50]:<br>
		Using any and all of the tools you have seen in this class, dissect code that you have obfuscated using your software. Identify everything you can.

- [ ] WriteUp/Submission [50]:<br>
		Document your development and design choices, include the dissection and reverse engineering of a sample program. Address the strengths and weaknesses of your software and how you would iterate and make your program more effective at obfuscation.<br>
You must use version control, include me,and:<br>
- [x] 5 pts  describe program:requirements, installation, usage [readme.md]
- [ ] 10 pts  documentation of design choices [design.md]
- [ ] 10 pts  documentation of your dissection and analysis [analysis.md]
- [ ] 25 pts  reflection of the strengths, weaknesses, and future changes [nop.md]
***
## Sample Usages:

### An example of an obfuscated c++ file with functions and variables renamed to a random string
![Example 1 Before Obfuscation](https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/Example1Photo1.png)
![Example 1 After Obfuscation](https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/Example1Photo2.png)
<br>
### An example of an obfuscated c++ file with whitespaces removed, excluding after functions, variables, and imports

### An example of an obfuscated c++ file with both types of obfuscation used

