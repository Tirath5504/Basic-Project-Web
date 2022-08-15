#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int width;
    do
    {
            width = get_int("Enter width: ");
            printf("#");
            width--;
            for(int i = 0; i < width; i++)
            {
                printf("#");
            }
    }while(width>0);
}