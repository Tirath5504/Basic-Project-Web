#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int width;
    do
    {
         width = get_int("Width: ");

    }while(width <= 0);

    for(int i = 1; i <= width; i++)
    {
        for(int j = width; j > (i-1) ; j--)
        {
                printf(".");
        }

        printf("\n");
    }
}