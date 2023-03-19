#include <stdio.h>

int main(void)
{
    int num[], n1, n2, n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num % 3 == 0)
        {
            printf("%d %d", (num / 3), (num / 3));
        }
        else if (num % 3 == 1)
        {
            printf("%d %d", ((num / 3) + 1), (num / 3));
        }
        else
        {
            printf("%d %d", (num / 3), ((num / 3) + 1));
        }
    }
    return 0;
}