#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int num)
{
	int flag = 0;
	for (int i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			flag = 1;
		}
	}
	if (flag == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main(void)
{
	int num, flag = 0;
	printf("Enter a number : ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		if (checkPrime(i) && checkPrime(num - i))
		{
			flag = 1;
			printf("YES, %d = %d + %d\n", num, i, num - i);
		}
	}
	if (flag == 0)
	{
		printf("No sum of prime numbers found");
	}
	printf("\n");
	return 0;
}