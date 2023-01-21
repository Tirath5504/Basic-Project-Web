# cs50 - Week 6 - Python - Figlet

import sys
from pyfiglet import Figlet
import random

def main():

    # Checking input from command-line
    if len(sys.argv) == 1 or len(sys.argv) == 3:

        # Taking input text
        text = input("Input: ")
        figlet = Figlet()
        print("Output: ")

        # If no command-line argument then print text in random font
        if len(sys.argv) == 1:
            figlet.setFont(font = random.choice(figlet.getFonts()))

        # If two command-line arguments are inputted
        elif len(sys.argv) == 3:

            # Checking if second argument is made to change font
            if sys.argv[1] == "-f" or sys.argv[1] == "--font":

                # Checking if input font is in figlet font list
                if sys.argv[2] in figlet.getFonts():
                    figlet.setFont(font = sys.argv[2])

                else:
                    print("Invalid input")

            else:
                print("Invalid input")

        print(figlet.renderText(text))

    else:

        print("Invalid usage")
        sys.exit()

main()