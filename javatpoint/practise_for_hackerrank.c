#include<stdio.h>

int main(void)
{
	int n1, count = 0;
	printf("Enter a number : ");
	scanf("%d", &n1);
	do
	{
		count++;
		n1 = n1 / 10;
	}
	while (n1 != 0);
	printf("Number of digits = %d\n", count);
	return 0;
}