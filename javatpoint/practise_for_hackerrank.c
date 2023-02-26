#include <stdio.h>

int add(int n)
{
	if (n == 0)
		return n;
	return (n % 10 + add(n / 10));
}

int main(void)
{
	int n, plus;
	printf("Enter range: ");
	scanf("%d", &n);
	plus = add(n);
	printf("Sum: %d\n", plus);
	return 0;
}