#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter number of problems (between 1 and 1000): ");
        scanf("%d", &n);
    }
    while (n > 1000 || n < 0);
    for (int i = 0; i < n; i++)
    {
        
    }
}