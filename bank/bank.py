# Week 6 - Python - Practise Problems

# Importing get_string from cs50 to get input
from cs50 import get_string

# Getting Input
input = get_string("Input: ")

if "Hello" in input:
    print("$0")
elif input[0] in "H":
    print("$20")
else:
    print("$100")