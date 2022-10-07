#include <cs50.h>
#include <stdio.h>
#include <string.h>

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
        int len = str[i].length();
        if (len > 10)
        {
            string a = str[0] + len + str[len];
        }
        else
            printf(str[i]);
    }
}