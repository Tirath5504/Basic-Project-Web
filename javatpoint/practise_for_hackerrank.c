#include<stdio.h>

int main(void)
{
	int n1, n2, flag;
	printf("Enter lower number of range : ");
	scanf("%d", &n1);
	printf("Enter upper number of range : ");
	scanf("%d", &n2);
	printf("Prime numbers in (%d, %d): ", n1, n2);
	for (int i = n1; i <= n2; i++)
	{
		flag = 0;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("%d, ", i);
		}
	}
	printf("\n");
	return 0;
}