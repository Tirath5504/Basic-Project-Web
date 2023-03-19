#include <stdio.h>
#include <string.h>
int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num[n];
    int n[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        for (j = 0; j < num[i]; j++)
        {
            scanf("%d", &n[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (j = 1; j < num[i]; j++)
        {
            
        }
    }

    return 0;
}