#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char *str = malloc(sizeof(char));
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int len = strlen(str);
        string length = "";
        sprintf(length, "%d", len);
        if (len > 10)
        {
            string ans = strcat(&str[0], length);
            ans = strcat(ans, &str[len - 1]);
            printf("%s\n", ans);
        }
        else
            printf("%s\n", str);
    }
}