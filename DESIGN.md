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
A function that goes through the code and removes all whitespaces where applicable. It removes spaces and newlines where appropriate so the code can still be run. It still keeps spacing in the `#` statements and in variable and function declarations.<>br
Chance or winston write a little more here to explain the rest of what is going on. <br>
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
Post-Variable Renamer: <br>
```
#include <iostream> int main(){int number=5;return 0;}
```
We decided to do this to further reduce the readability of the code. It is much harder to read if statements, loops, etc. when all the white space is removed. This does have a small requiremtn that the coder does use `{}` that with loops and if statements. 
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

void test_function(int a)
{
    return;
}
```
Post-Variable Renamer: <br>
```
#include <iostream> int main(){int awdrgyjil = 5;qwertyuiop(awdrgyjil);return 0;}void qwertyuiop(int axdvgnjm){return;}
```
