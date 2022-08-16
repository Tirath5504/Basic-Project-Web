#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int width;
    do
    {
         width = get_int("Width: ");

    }while(width <= 0);
    int c = 0;
    for(int i = width; i > 0; i--)
    {
        if( (width - i) >= c)
        {
                 printf("#");
                 for(int j = i; j <= width; j++)
                {
                         printf("#");
                }
                printf("\n");
        }
        else
        {
                  printf(" ");
        }
        c++;
    }
}