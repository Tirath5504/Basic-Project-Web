#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    string str[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for(int i = 0; i < n; i++)
    {
        int len = strlen(str[i]);
        string b = "";
        sprintf(b, "%d", len);
        if (len > 10)
        {
            string a = strcat(str[0], b);
            a = strcat(a, str[len - 1]);
            printf("%s", a);
        }
        else
            printf("%s", str[i]);
    }
}