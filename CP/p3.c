#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, flag = 0;
    scanf("%d", &n);
    int num[n];
    int no[1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        for (j = 0; j < num[i]; j++)
        {
            scanf("%d", &no[j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int max = no[0];
        for (j = 1; j < num[i]; j++)
        {
            max = 
        }
    }

    return 0;
}