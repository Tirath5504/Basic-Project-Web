#include <stdio.h>

void perfect(int num);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    perfect(num);
    return 0;
}

void perfect(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum = sum + i;
		}
	}
	if (sum == num)
	{
		printf("Perfect number\n");
	}
	else
	{
		printf("Not a perfect number\n");
	}
}