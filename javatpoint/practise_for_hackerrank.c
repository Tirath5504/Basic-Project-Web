#include<stdio.h>

int main(void)
{
	int n1;
	printf("Enter a number : ");
	scanf("%d", &n1);
	while (n1 > 0)
	{
		sum = sum = n1 % 10;
		n1 = n1 / 10;
	}
	return 0;
}