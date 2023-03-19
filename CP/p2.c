#include <stdio.h>

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
        if (str[i+1] != str[i])
        {
            for (int j = i+2; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    printf("NO\n");
                    flag = 1;
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