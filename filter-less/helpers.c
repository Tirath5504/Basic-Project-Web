#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int avg = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0;
            if (avg > 255)
            {
                avg = 255;
            }
            image[i][j].rgbtBlue = avg;
            image[i][j].rgbtGreen = avg;
            image[i][j].rgbtRed = avg;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Creating a copy of original colours

            int old_blue = image[i][j].rgbtBlue;
            int old_green = image[i][j].rgbtGreen;
            int old_red = image[i][j].rgbtRed;

            // Deriving new colours

            int sepia_blue = round(.272 * old_red + .534 * old_green + .131 * old_blue);
            int sepia_green = round(.349 * old_red + .686 * old_green + .168 * old_blue);
            int sepia_red = round(.393 * old_red + .769 * old_green + .189 * old_blue);

            // Checking if attribute is greater than 255

            if (sepia_blue > 255)
            {
                sepia_blue = 255;
            }
            if (sepia_green > 255)
            {
                sepia_green = 255;
            }
            if (sepia_red > 255)
            {
                sepia_red = 255;
            }

            // Printing new colours

            image[i][j].rgbtBlue = sepia_blue;
            image[i][j].rgbtGreen = sepia_green;
            image[i][j].rgbtRed = sepia_red;
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    // Creating a copy

    RGBTRIPLE copy[height][width];

    // Inputing reverse of image to copy

    for (int i = 0; i < height; i++)
    {
        for (int j = width, k = 0; j > 0; j--, k++)
        {
            copy[i][j] = image[i][k];
        }
    }

    // Printing reversed image

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    // Creating a copy

    RGBTRIPLE copy[height][width];
    int n;

    // Inputing blurred image to copy

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            copy[i][j].rgbtRed = 0;
            copy[i][j].rgbtBlue = 0;
            copy[i][j].rgbtGreen = 0;
            if ((i == 0 && j == 0) || (i == height && j == width) || (i == 0 && j == width) || (i == height && j == 0))
            {
                n = 4;
            }
            else if ((i == 0 && j != width && j != 0) || (i == height && j != 0 && j != width))
            {
                n = 6;
            }
            else if ((j == 0 && i != width && i != 0) || (j == height && i != 0 && i != width))
            {
                n = 6;
            }
            else
            {
                n = 10;
            }
            for (int k = i - 1; k < i + 2; k++)
            {
                for (int l = j - 1; l < j + 2; l++)
                {
                    if ((k >= 0) && (l >= 0) && (k < height) && (l < width))
                    {
                        copy[i][j].rgbtRed = copy[i][j].rgbtRed + image[k][l].rgbtRed;
                        copy[i][j].rgbtBlue = copy[i][j].rgbtBlue + image[k][l].rgbtBlue;
                        copy[i][j].rgbtGreen = copy[i][j].rgbtGreen + image[k][l].rgbtGreen;
                    }
            }
            copy[i][j].rgbtRed = copy[i][j].rgbtRed / n;
            copy[i][j].rgbtBlue = copy[i][j].rgbtBlue / n;
            copy[i][j].rgbtGreen = copy[i][j].rgbtGreen / n;
        }
    }

    // Printing blurred image

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j].rgbtRed = copy[i][j].rgbtRed / n;
            image[i][j].rgbtBlue = copy[i][j].rgbtBlue / n;
            image[i][j].rgbtGreen = copy[i][j].rgbtGreen / n;
        }
    }
    return;
}
