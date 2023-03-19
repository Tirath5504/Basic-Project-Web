#include <stdio.h>

int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num;
        int count = 0;
        scanf("%d", &num);
        char str[num];
        scanf("%s", str);
        for(int j = 0, k = num-1; j < num; j++, k--)
        {
            if ((str[j] == '1' && str[k] == '0') || (str[j] == '0' && str[k] == '1'))
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}