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
	char str[100], copy[100];
	printf("Enter a sentence : ");
	scanf("%s", &str);
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		copy[n - i] = str[i];
	}
	printf("");
	printf("\n");
	return 0;
}