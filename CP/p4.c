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
    for (int i = 0; i < num[i]; i++)
    {
        no[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (num[a] % 2 == 1 && num[a] > 3)
        {
            printf("3");
            for (int j = 1; j < 2; j++)
            {
                printf("%d", j);
            }
            for (int j = 4; j < num[a]; j += 2)
            {
                int temp = no[j+1];
                no[j+1] = no[j];
                no[j] = temp;
            }
        }
        printf()
        printf("\n");
        a++;
    }
    return 0;
}