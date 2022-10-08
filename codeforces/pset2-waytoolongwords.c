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
    string answer = malloc(50 * sizeof(char));
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int len = strlen(str);
        char *length = malloc(50 * sizeof(char));
        sprintf(length, "%d", len);
        if (len > 10)
        {
            char *ans = malloc(50 * sizeof(char));
            char first = str[0];
            char comma = ',';
            strncat(ans, &first, 1);
            strcat(ans, length);
            strcat(ans, &str[len - 1]);
            strcpy(answer, ans);
            strncat(answer, &comma, 1);
            free(ans);
        }
        else
            printf("%s\n", str);
        free(length);
    }
    for(int i = 0; i < strlen(answer); i++)
    {
        if (answer[i] == ',')
        {
            printf("\n");
        }
        else
            printf("%c", answer[i]);
    }
    free(answer);
    free(str);
}