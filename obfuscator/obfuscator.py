"""
obfuscator
Description: A basic python script to aid in the obfuscation of c and c++ source code files
Authors: Sam "Alice" Blair, Winston Howard, Chance Sweetser
Created Date: 05/04/20
"""

import re

"""
Function to rename all variables and fuctions
"""
def VarRenamer(a):
    VarMap ={}
    stuff = re.findall("REGEX", a
        #"PUT REGEX HERE"
        )
    for x in stuff:
        if(x in VarMap):
            #"CHANGE IT"
            # USe this i think re.sub()
        else:
            #"ADD TO VAR_MAP"

def main():
    """
    The main function to begin the obfuscation of c code files
    """
 
main()
