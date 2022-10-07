#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    if (n % 2 == 0)
        printf("YES\n");
    else
        printf("NO\n");
}