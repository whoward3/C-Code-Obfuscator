# Reflection

## Strengths:
#### Hard to read
The main objective was to make the given code hard to read. It does this job sucessfully so that even experienced programmers have a difficult time. It is also hard to understand when using IDA pro. While the it does not change the main structure of the code it did make the names of things jibberish.
#### Hard to trace variables


## Weaknesses:
#### Time Complexity of code
The time complexity of both obfuscation functions each are roughly O(n²), if not more, which can cause the runtime of our code to be too long when given lengthy c++ files to obfuscate.
#### Comment Remover
There are a couple of known flaws with the comment remover. If there is a comment in a hard coded string it will still be removed. Also, it has the issue of not being able to remove multi-line C style block comments. This helps keep some readability in code when we tried to remove most of it. We could not figure out a way to get a regex that handled  multi-line C style block comments and removed them properly.
<br>
## Future Changes:
- Improve the time complexity
- Include the ability to obfuscate on other high-level programming languages
- Fix the comment remover flaws
- Make pointers to variables possibly
