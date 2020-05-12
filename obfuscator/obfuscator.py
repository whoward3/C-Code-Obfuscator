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




def variable_renamer(given_string):
    """
    Function to rename all variables and fuctions. 
    given_string is a string of C/C++ code
    """
 
    # Variable declarations:
    variable_dictionary = {}
    special_cases = {"typedef","unsigned"}
    index = 0
    new_string = ""

    # Split the code to indicate when it enters/exits a string
    split_code = re.split('\"',given_string)
    
    # REGEX to find all function and variable declarations ignoring main
    filtered_code = re.findall(
        "(?:\w+\s+)(?!main)(?:\*)*([a-zA-Z_][a-zA-Z0-9_]*)", given_string)

    # For loop to add examples found from running a REGEX to a dictionary object
    # Ignores special cases and repeats
    # When a value is entered it is also assigned a random string of length 12
    for found_example in filtered_code:
        
        if(found_example not in special_cases):
            
            if(found_example not in variable_dictionary):
                
                variable_dictionary[found_example] = random_string(12)

    # For each even section in split code (odd indicates that it is in a string)
    # replace all of the varaible and function names with what is defined in the dictionary
    for section in split_code:
            
            if(index%2==0):  
                
                for entry in variable_dictionary:   
                    
                    # Used \W because we dont want to replace a variable if it is inside another word.                 
                    re_string = r"\W{}\W".format(entry)

                    # While loop to go through every entry and replace it
                    # Breaks when it cannot find another instance
                    while True:
                        first_found_entry = re.search(re_string, section)
                        if(not first_found_entry):
                            break

                        # Gets the iterator start and enndpoints of the searched re_string
                        # Then replaces the the information inbetween with the dictionary value
                        start = first_found_entry.start(0)
                        end = first_found_entry.end(0)
                        section = section[:start+1] + variable_dictionary[entry] + section[end-1:]
            
            # Add the current section back to make the original string but with obfuscated names
            # Accounts for adding a quote everytime except for the first scenario
            if(index >= 1):
                new_string = new_string + "\"" + section  
            else:
                new_string = new_string + section
            
            index+=1
    
    # Return the obfuscated code
    return new_string


def random_string(stringLength=8):
    """
    Function to generate a random string.
    Can pass it an integer string length to make it that size else it will be 8
    """
    letters = string.ascii_lowercase
    return ''.join(random.choice(letters) for i in range(stringLength))



def whitespace_remover(a):
    """
    Function to remove all whitespace, except for after functions, variables, and imports
    """
    splits = re.split('\"',a)
    code_string = "((\w+\s+)[a-zA-Z_*][|a-zA-Z0-9_]*|#.*|return [a-zA-Z0-9_]*| [[.].]|else)"
    index = 0
    a = ""
    for s in splits:
            # If its not the contents of a string, remove spaces of everything but code
            if(index%2==0):                
              s_spaceless = re.sub("[\s]", "", s)          # Create a spaceless version of s
              s_code = re.findall(code_string,s)           # find all spaced code blocks in s

              for code in s_code:
               old = re.sub("[\s]", "", code[0])
               new = code[0]

               if(code[0][0] == '#'):
                 new = code[0] + "\n"                      # Adding a newline for preprocesser commands
               elif("unsigned" in code[0] or "else" in code[0]):
                 new = code[0] + " "
               s_spaceless = s_spaceless.replace(old,new) # Replace the spaceless code blocks in s with their spaced equivilents                
            else:
              s_spaceless = s

            if(index >= 1):
             a = a + "\"" + s_spaceless
            else:
             a = a + s_spaceless
            index+=1
    return a

def comment_remover(given_string):
    """
    Function to (currently) remove C++ style comments 
    given_string is a string of C/C++ code
    """

    #This does not take into account if a C++ style comment happens within a string
    # i.e. "Normal String // With a C++ comment embedded inside"
    cpp_filtered_code = re.findall(
        r"\/\/.*", given_string)
    for entry in cpp_filtered_code:
        given_string = given_string.replace(entry, "")
    
    # This is a barebones start for C style block comments
    # Current issue is it is only single line C style comments
    # It also finds C style comments in strings
    c_filtered_code= re.findall(
        r"\/\*.*\*\/", given_string)
    for entry in c_filtered_code:
        given_string = given_string.replace(entry, "")
    
    return given_string

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
        if(".c" in filename or ".h" in filename):
            with open(os.path.join(cwd, filename)) as file_data:
                file_string = file_data.read()
                print("PASS\n")
                file_string = comment_remover(file_string)
                file_string = variable_renamer(file_string)
                file_string = whitespace_remover(file_string)
                f = open("obfuscated_"+filename, "w+")
                f.write(file_string)
                print(file_string)

        else:
            print("FAIL")


if __name__ == "__main__":
    main()
