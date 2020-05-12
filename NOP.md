# Reflection

## Strengths:
#### Hard to read
The main objective was to make c/c++ source code hard to read. It does this job sucessfully so that even experienced programmers will have a difficult time reading our obfuscated source without tools. It is also hard to understand when using IDA pro. While the it does not change the main structure of the code it did make the names of things jibberish, remove whitespaces and newlines, as well as remove helpful comments.
#### Hard to trace variables
By renaming all variables and functions to randomly generated c strings it becomes harder for a programmer to trace the execution of our program. Because the function names do not offer any insight into what the function does it will be hard for a programmer to discern what a specific function does with regard to the program as a whole. In addition to this, all function and variable names are renamed with the same random schema which means discerning the call stack is also more difficult. 

## Weaknesses:
#### Code Efficiency
The time complexity of both obfuscation functions each are roughly O(n²), if not more, which can cause the runtime of our code to be too long when given lengthy c++ files to obfuscate.
#### Comment Remover
There are a couple of known flaws with the comment remover. If there is a comment in a hard coded string it will still be removed. Also, it has the issue of not being able to remove multi-line C style block comments. This helps keep some readability in code when we tried to remove most of it. We could not figure out a way to get a regex that handled  multi-line C style block comments and removed them properly.
<br>
## Future Changes:
- Improve the time complexity
- Include the ability to obfuscate on other high-level programming languages
- Fix the comment remover flaws
- Make pointers to variables possibly
