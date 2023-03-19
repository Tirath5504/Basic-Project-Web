#include <stdio.h>
#include <string.h>
int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num[n];
    char str[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        scanf("%s", &str[i]);
    }
 
    return 0;
}