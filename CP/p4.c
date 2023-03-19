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
        if (num[a] % 2 == 1 && num[a] > 3)
        {
            for (int j = 1; j < 3; j++)
            {
                printf("%d", j);
            }
            for (int j = 4; j < num[a]; j++)
            {
                int temp = j+1;
                
            }
        }
        printf("\n");
        a++;
    }
    return 0;
}