"""
obfuscator
Description: A basic python script to aid in the obfuscation of c and c++ source code files
Authors: Sam "Alice" Blair, Winston Howard, Chance Sweetser
Created Date: 05/04/20
"""

import os, re, math, random

def variable_renamer(a):
    """
    Function to rename all variables and fuctions
    """
    var_map ={}
    stuff = re.findall("REGEX", a)
    for x in stuff:
        if(x in var_map):
            pass
            #"CHANGE IT"
            # USe this i think re.sub()
        else:
            pass
            #"ADD TO VAR_MAP"


def main():
    """
    The main function to begin the obfuscation of c code files
    """
    cwd = os.getcwd()
    directory = cwd[-28:]
    if(r"C-Code-Obfuscator\obfuscator" in directory or r"C-Code-Obfuscator/obfuscator" in directory):
     cwd = cwd[:-10]
     cwd = cwd + "tests"
    else:
     cwd = input('Path to C Source Files Directory: ')
    
    print("Looking for C Source Files in {}...".format(cwd))

    print("Log: ")
    for filename in os.listdir(cwd):
     print("\n {} : \r".format(filename))
     if((".cpp" or ".c" or ".hpp" or ".h") in filename):
      print("PASS\n")

     else:
      print("FAILED")

if __name__ == "__main__":
   main()