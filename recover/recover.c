#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

const int BLOCK_SIZE = 512;

int main(int argc, char *argv[])
{
    // Checking if user input is valid

    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    // Checking if input is JPEG file

    int16_t buffer[513];
    int i = 0;
    char *filename;
    while (fread(buffer, 1, BLOCK_SIZE, file != EOF))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if (i == 0)
            {
                sprintf(filename, "%03i.jpg", i);
                FILE *img = fopen(file, "w");
                fwrite(file, BLOCK_SIZE, 1, img);
                i++;
            }
            else
            {
                fclose(img);
            }
        }
        else
        {
            fwrite(file, BLOCK_SIZE, 1, img);
        }
    }
    return 0;
}