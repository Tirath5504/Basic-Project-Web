#include <stdio.h>

int nat(int n1, int n2);

int main()
{
    int num1, num2, sum;
    printf("Enter range: ");
    scanf("%d %d", &num1, &num2);
    sum = nat(num1, num2);
	printf("Sum = %d", sum);
    return 0;
}

int nat(int n1, int n2)
{
	int sum = 0;
	if (n1 <= n2)
	{
		return (sum + nat(n1+1, n2));
	}
	else
	{
		return n1;
	}
}