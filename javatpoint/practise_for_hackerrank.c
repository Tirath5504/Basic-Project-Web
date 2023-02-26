#include <stdio.h>

int sum = 0;

int add(int n)
{
	if (n == 0)
		return n;
	return (sum + add(n-1));
}

int main(void)
{
	int n, plus;
	printf("Enter a number: ");
	scanf("%d", &n);
	plus = add(n);
	printf("Sum: %d\n", sum);
	return 0;
}