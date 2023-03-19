#include <stdio.h>

int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    int a = 0;
    for (int i = 0; i < n; i++)
    {
        printf("%d", num[a]);
        for (int j = 1; j < num[a]; j++)
        {
            printf(" %d", j);
        }
        printf("\n");
        a++;
    }
    return 0;
}