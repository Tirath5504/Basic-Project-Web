#include <stdio.h>
#include <string.h>
int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num[n];
    char str[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        scanf("%s", &str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int k = 0; k < strlen(str); k++)
        {
        if (str[k+1] != str[k])
        {
            for (int j = k+2; j < strlen(str); j++)
            {
                if (str[k] == str[j])
                {
                    printf("NO\n");
                    flag = 1;
                    break;
                }
            }
        }
        }
        if (!flag)
        {
            printf("YES\n");
        }
    }
    return 0;
}