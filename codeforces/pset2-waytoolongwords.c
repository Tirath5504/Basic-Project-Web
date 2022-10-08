#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char *str = malloc(50 * sizeof(char));
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int len = strlen(str);
        char *length = malloc(50 * sizeof(char));
        sprintf(length, "%d", len);
        if (len > 10)
        {
            char *ans = strcat(str[0], length);
            ans = strcat(ans, str[len - 1]);
            printf("%s\n", ans);
        }
        else
            printf("%s\n", str);
        free(length);
    }
    free(str);
}