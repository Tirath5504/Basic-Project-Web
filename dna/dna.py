import csv
import sys
# Source: https://stackoverflow.com/a/16503807/19959015
import pandas as pd

def main():

    # Checking for command-line usage
    if not len(sys.argv) == 3:
        print("Usage: python dna.py data.csv sequence.txt")

    # Reading database file into a variable
    table = []
    with open(sys.argv[1]) as file:
        reader = csv.DictReader(file)
        for row in reader:
            person = row.copy()
            table.append(person)

    # Reading DNA sequence file into a variable
    f = open(sys.argv[2], "r")
    sequence = f.read()

    # Finding longest match of each STR in DNA sequence
    answer = []
    headers = reader.fieldnames
    headers.remove("name")
    with open(sys.argv[1]) as file:
        for j in range(len(headers)):
            answer.append(longest_match(sequence, headers[j]))

    # Checking database for matching profiles
    for i in range(len(table)):
        count = 0
        for j in headers:
            copy = table[i]
            if answer == copy[j]:
                count += 1
            if count == 3:
                print(j)
                break

    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run

if __name__ == "__main__":
    main()