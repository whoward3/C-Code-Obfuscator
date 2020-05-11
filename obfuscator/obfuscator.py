"""
obfuscator
Description: A basic python script to aid in the obfuscation of c and c++ source code files
Authors: Sam "Alice" Blair, Winston Howard, Chance Sweetser
Created Date: 05/04/20
"""

import os, re, math, random, string


def variable_renamer(a):
    """
    Function to rename all variables and fuctions when given a string a
    """
    var_map = {}
    code = re.findall(
        r'(?:\w+\s+)([a-zA-Z_][a-zA-Z0-9_]*)', a)
    # this finds variable declarations and func decs
    for x in code:
        if(x in var_map):
            pass
        # Ignore it becaude it is already in the map
        else:
            # generate a random string and assign that to the function/var name
            new_string = random_string(12)
            var_map[x] = new_string
    for z in var_map:
        # for each instance in the map replace it in the string with the randomly generated string
        a = a.replace(z, var_map[z])
    return a


def random_string(stringLength=8):
    letters = string.ascii_lowercase
    return ''.join(random.choice(letters) for i in range(stringLength))


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
         with open(os.path.join(cwd, filename)) as file_data:
          file_string = file_data.read()
          print("PASS\n")
          file_string = variable_renamer(file_string)
          
          print(file_string)

        else:
            print("FAILED")

if __name__ == "__main__":
    main()