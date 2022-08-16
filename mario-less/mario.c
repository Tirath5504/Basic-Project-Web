#include <cs50.h>
#include <stdio.h>

// Declaring functions
int input(void);

int main(void)
{
    int n = input(void);
    for(int i = n; i > 0; i--)
    {
        for(int j = n; j > 0; j++)
        {

        }
        printf("\n");
    }
}

int input(void)
{
    int width;
    do
    {
         width = get_int("Width: ");
    }
    while (width <= 0 && width > 8);
    return width;
}
