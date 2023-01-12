#include<stdio.h>

int main(void)
{
	int n;
	printf("Enter a number : ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		for (int l = n; l > i; l--)
		{
			printf(" ");
		}
		for (int m = 1; m <= i; m++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}