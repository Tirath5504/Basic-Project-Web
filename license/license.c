#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    // Check for command line args
    if (argc != 2)
    {
        printf("Usage: ./read infile\n");
        return 1;
    }

    // Create buffers to read into
    char *buffer = malloc(7 * sizeof(char));
    char ch;

    // Create array to store plate numbers
    char *plates[8];

    // Opening input file
    FILE *infile = fopen(argv[1], "r");

    // Initializing counter variable
    int idx = 0;

    // Reading input file
    while (fread(buffer, 1, 7, infile) == 7)
    {

        char *str = malloc(7 * sizeof(char));

        // Replace '\n' with '\0'
        if (buffer != NULL)
        {
            buffer[6] = '\0';
        }

        //
        for (int i = 0; i < 7; i++)
        {
            ch = buffer[i];
            str = str + &ch;
        }

        // Save plate number in array
        plates[idx] = str;
        idx++;
    }

    // Printing file
    for (int i = 0; i < 8; i++)
    {
        printf("%s\n", plates[i]);
    }

    // Closing input file and freeing manually allocated memory
    fclose(infile);
    free(buffer);
    free(str);
}