#include<stdio.h>

int main(void)
{
	int n1, sum = 0;
	printf("Enter a number : ");
	scanf("%d", &n1);
	while (n1 > 0)
	{
		sum = sum + n1 % 10;
		n1 = n1 / 10;
	}
	printf("Sum = %d", sum);
	return 0;
}