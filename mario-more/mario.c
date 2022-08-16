#include <cs50.h>
#include <stdio.h>

// Declaring Functions
int input(void);
void print_pattern(int n);

// Main Function
int main(void)
{
    int width = input();
    print_pattern(width);
}

// Taking input from user
int input(void)
{
    int n;
    do
    {
        n = get_int("Enter Width: ");
    }
    while (n <= 0 || n > 8);
    return n;
}

// Printing Pattern
void print_pattern(int n)
{
    int c = (n / 2);
    for (int i = 0; i < c; i++)
    {
        // Printing first part of pattern
        for (int j = i; j < (c - 1); j++)
        {
            printf(" ");
        }
        for (int j = c; j >= (c - i); j--)
        {
            printf("#");
        }
        printf(" ");

        // Printing second part of pattern
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}