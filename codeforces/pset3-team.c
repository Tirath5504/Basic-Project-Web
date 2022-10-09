#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    char *str = malloc(10*sizeof(char));
    do
    {
        printf("Enter number of problems (between 1 and 1000): ");
        scanf("%d", &n);
    }
    while (n > 1000 || n < 0);
    int c2 = 0;
    char ch;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%s", &ch);
            strncat(str, &ch, 1);
        }
        int c1 = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[j] == 1)
                c1++;
        }
        if (c1 > 2)
            c2++;
        str = "";
    }
    printf("%d\n", c2);
    free(str);
}