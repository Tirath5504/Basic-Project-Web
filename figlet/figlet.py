# cs50 - Week 6 - Python - Figlet

import sys
from pyfiglet import Figlet

def main():

    # Checking input from command-line
    if len(sys.argv) == 1 or len(sys.argv) == 3:

        # Taking input text
        text = input("Input: ")
        figlet = Figlet()
        for i in figlet.getFonts():
            print(i)

        # If no command-line argument then print text in random font
        if len(sys.argv) == 1:
            print("Output: ")

    else:

        print("Invalid usage")
        sys.exit()

main()