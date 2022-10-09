#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    int n;
    string str = NULL;
    do
    {
        printf("Enter number of problems (between 1 and 1000): ");
        scanf("%d", &n);
    }
    while (n > 1000 || n < 0);
    int c2 = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int c1 = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == 1)
                c1++;
        }
        if (c1 > 2)
            c2++;
    }
    printf("%d\n", c2);
}