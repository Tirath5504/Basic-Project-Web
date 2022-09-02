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

    // Inputing blurred image to copy

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (i == 0 && j == 0)
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j + 1] + image[i + 1][j + 1] / 4;
            }
            else if (i == 0 && j != 0 && j != width)
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j + 1] + image[i][j - 1] + image[i + 1][j - 1] + image[i + 1][j + 1] / 6;
            }
            else if (i == 0 && j == width)
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j - 1] + image[i + 1][j - 1] / 4;
            }
            else if (j == 0 && i != 0 && i != height)
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j + 1] + image[i + 1][j + 1] + image[i - 1][j] + image[i - 1][j + 1] / 6;
            }
            else if (i == height && j == 0)
            {
                copy[i][j] = image[i][j] + image[i - 1][j] + image[i][j + 1] + image[i - 1][j + 1] / 4;
            }
            else if (j != 0 && j != width && i == height)
            {
                copy[i][j] = image[i][j] + image[i][j + 1] + image[i][j - 1] + image[i - 1][j] + image[i - 1][j + 1] + image[i - 1][j - 1] / 6;
            }
            else if (j == width && i == height)
            {
                copy[i][j] = image[i][j] + image[i - 1][j] + image[i][j - 1] + image[i - 1][j - 1] / 4;
            }
            else if (j == width && i != 0 && i != height)
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j - 1] + image[i + 1][j - 1] + image[i - 1][j] + image[i - 1][j - 1] / 6;
            }
            else
            {
                copy[i][j] = image[i][j] + image[i + 1][j] + image[i][j + 1] + image[i][j - 1] + image[i + 1][j - 1] + image[i + 1][j + 1] + image[i - 1][j] + image[i - 1][j + 1] + image[i - 1][j - 1] / 10;
            }
        }
    }

    // Printing blurred image

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }
    return;
}
