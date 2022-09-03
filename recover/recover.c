#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
    // Checking if user input is valid

    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)\
    {
        printf("Could not open file.\n");
        return 1;
    }

    // C
    return 0;
}