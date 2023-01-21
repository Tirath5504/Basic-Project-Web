# cs50 - Week 6 - Python - Figlet

import sys

def main():

    # Checking input from command-line
    if not len(sys.argv) == 1 or not len(sys.argv) == 3:
        print("Invalid usage")
        sys.exit

    