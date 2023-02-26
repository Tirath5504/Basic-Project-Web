#include <stdio.h>

int add(int n)
{
	if (n == 0)
		return n;
	return (n + add(n-1));
}

int main(void)
{
	int n, plus;
	printf("Enter a number: ");
	scanf("%d", &n);
	plus = add(n);
	printf("Sum: %d\n", plus);
	return 0;
}