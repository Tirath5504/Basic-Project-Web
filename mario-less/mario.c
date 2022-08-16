#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int width;
    do
    {
         width = get_int("Width: ");
    }while(width <= 0);

    for(int i = 0; i <= width; i++)
    {
        if(i)
        printf("\n");
    }
}