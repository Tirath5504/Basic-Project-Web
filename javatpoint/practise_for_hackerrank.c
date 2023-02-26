#include <stdio.h>

int main(void)
{
	float sum = 0, term = 1.0;
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i)
	{
		sum = sum + term;
		term = term / 2.0;
	}
	printf("Sum = %f\n", sum);
	return 0;
}