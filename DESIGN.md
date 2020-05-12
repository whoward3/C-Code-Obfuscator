# Design Choices
We decided that we were going to obfuscate a C/C++ code by turning it into a string. After it is turned into a string it is passed to 3 different functions. In this order: <br>
1. Comment Remover
2. Variable Renamer
3. Whitespace Remover
## Comment Remover
A function that goes through the entire code with a REGEX to remove all traces of C++ style comments.<br>
For Example:<br>
```
// This is a C++ style comment 
```
It then runs through the code again removing C style block comments. It currently can only remove single line C comments. 
For example it can remove:
```
/* This is a single line C style */
```
And it can't remove:
```
/* This is 
   a multi-line
   C style
   comment */
```
We believe that if code is commented in any way, if you remove the comments it makes it less understandable to the reader. This also makes less work for variable renamer.
## Variable Renamer
A function that goes through the code and renames all funcitions and variables except for main. It finds where each one is declared and then goes through and replaces the variable. We had to make a REGEX to replace and user a iterator to prevent if the variable\function name was inside another word. <br>
For example:<br>
Pre-Variable Renamer: <br>
```
int main()
{
    int number = 5;
    test_function(5);
    return 0;
}

void test_function(int a)
{
    return;
}
```
Post-Variable Renamer: <br>
```
int main()
{
    int asdfghjkl = 5;
    qasdfyuhgf(5);
    return 0;
}

void qasdfyuhgf(int zsedcvgyjm)
{
    return;
}
```
We believe that renaming functions & variables is an easy way to obfuscate what you are doing. It takes away any discriptive names and gives it some random characters. 
## Whitespace Remover
A function that goes through the code and removes all whitespaces where applicable. It removes spaces and newlines where appropriate so the code can still be run. It still keeps spacing for preprocessor commands and special c commands such as variable and function declarations as well as logic statements.<br>
For example:<br>
Pre-Whitespace Remover: <br>
```
#include <iostream>

int main()
{
    int number = 5;
    return 0;
}

```
Post-Whitspace remover: <br>
```
#include <iostream>
int main(){int number=5;return 0;}
```
We decided to do this to further reduce the readability of the code. It is much harder to read if statements, loops, etc. when all the white space is removed. We expect the coder to follow c-style guidelines to ensure this function removes whitespace appropriately and that the code is still executable after this function is complete. This includes the appropriate usage of `{}` with iterators and conditional statements.
## Using all 3 functions
Pre using all 3 functions: <br>
```
#include <iostream>

//This is a dummy function
int main()
{
    int number = 5;
    test_function(number);
    return 0; /*End of the function*/
}

int test_function(int a)
{
    return a;
}
```
Pos using all 3 functions: <br>
```
#include <iostream>
int main(){int czxwfasraudt=5;jxjnypvyotvo(czxwfasraudt);return 0;}int jxjnypvyotvo(int wyefsxvizawd){return wyefsxvizawd;}
```
As you can see above when we combine the three functions we produce code that is very hard to read, much harder to trace, and yet still executable. The removal of comments and the removal of whitespaces make tracing the execution of the program much harder and the reading of logical statements difficult. The renaming of variables compounds this by making tracing functions, variables, and fields very difficult.
