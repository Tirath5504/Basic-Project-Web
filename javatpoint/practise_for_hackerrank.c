#include <stdio.h>

int main(void)
{
	float sum = 0, term = 0.5;
	int j = 1, k =2;
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		term = (float)j/k;
		sum = sum + term;
		j = j + 2;
		k = k + 2;
	}
	printf("Sum = %f\n", sum);
	return 0;
}