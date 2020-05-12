"""
obfuscator
Description: A basic python script to aid in the obfuscation of c and c++ source code files
Authors: Sam "Alice" Blair, Winston Howard, Chance Sweetser
Created Date: 05/04/20
"""

import os
import re
import math
import random
import string




def variable_renamer(a):
    """
    Function to rename all variables and fuctions when given a string a
    """
    var_map = {}
    special_cases = {"typedef","unsigned"}
    splits = re.split('\"',a)
    code = re.findall(
        "(?:\w+\s+)(?!main)([a-zA-Z_][a-zA-Z0-9_]*)", a)
    # this finds variable declarations and func decs
    for x in code:
        if(x not in special_cases):
            if(x not in var_map):
                var_map[x] = random_string(12)
                # generate a random string and assign that to the function/var name

    index = 0
    a = ""
    for s in splits:
            if(index%2==0):  
                for z in var_map:
                    # for each instance in the map replace it in the string with the randomly generated string                    
                    re_string = r"\W{}\W".format(z)
                    while True:
                     m = re.search(re_string,s)
                     if(not m):
                         break
                     start = m.start(0)
                     end = m.end(0)
                     s = s[:start+1] + var_map[z] + s[end-1:]
            if(index >= 1):
                a = a + "\"" + s  
            else:
                a = a + s
            index+=1
    return a


def random_string(stringLength=8):
    letters = string.ascii_lowercase
    return ''.join(random.choice(letters) for i in range(stringLength))

def whitespace_remover(a):
    """
    Function to remove all whitespace, except for after functions, variables, and imports
    """
    splits = re.split('\"',a)
    code_string = "((\w+\s+)[a-zA-Z_][a-zA-Z0-9_]*|#.*)"
    index = 0
    a = ""
    for s in splits:
            if(index%2==0):                
              s_spaceless = re.sub("[\s]", "", s)                          # Create a spaceless version of s
              s_code = re.findall(code_string,s)                           # find all spaced code blocks in s

              i = 0
              for code in s_code:
                old = re.sub("[\s]", "", code[0])
                new = s_code[i][0]
                s_spaceless = s_spaceless.replace(old,new)      # Replace the spaceless code blocks in s with their spaced equivilents                
                i+=1

              if(index >= 1):
                a = a + "\"" + s_spaceless
              else:
                a = a + s_spaceless
            index+=1
    return a


def main():
    """
    The main function to begin the obfuscation of c code files
    """
    cwd = os.getcwd()
    # Attempt to find the repository directory name, if it exists change cwd to where the tests folder should be in the cwd
    if(r"C-Code-Obfuscator" in cwd):
        offset = cwd.find("C-Code-Obfuscator") + 17
        cwd = cwd[:offset]
        cwd = cwd + cwd[-18] + "tests"
    else:
        cwd = input('Path to C Source Files Directory: ')

    print("Looking for C Source Files in {}...".format(cwd))

    print("Log: ")
    for filename in os.listdir(cwd):
        print("\n {} : \r".format(filename))
        if((".cpp" or ".c" or ".hpp" or ".h") in filename):
            with open(os.path.join(cwd, filename)) as file_data:
                file_string = file_data.read()
                print("PASS\n")
                file_string = whitespace_remover(file_string)
                f = open("obfuscated_"+filename, "w+")
                f.write(file_string)
                print(file_string)

        else:
            print("FAIL")


if __name__ == "__main__":
    main()
