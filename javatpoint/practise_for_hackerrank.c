#include <stdio.h>

void nat(int n1, int n2);

int main()
{
    int num1, num2;
    printf("Enter range: ");
    scanf("%d %d", &num1, &num2);
    nat(num1, num2);
    return 0;
}

void nat(int n1, int n2)
{
	int sum = 0;
	if (n1 != n2)
	{
		printf("%d", n1);
		nat(n1+1, n2);
	}
	else
	{
		return
	}
}