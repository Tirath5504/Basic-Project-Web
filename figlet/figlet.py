# cs50 - Week 6 - Python - Figlet

import sys
from pyfiglet import Figlet

def main():

    # Checking input from command-line
    if not len(sys.argv) == 1 or not len(sys.argv) == 3:
        print("Invalid usage")
        sys.exit()

    # Taking input text
    text = input("Input: ")
    figlet = Figlet()
    print(figlet.getFonts())

    # If no command-line argument then print text in random font
    if len(sys.argv) == 1:
        print("Output: ")

main()