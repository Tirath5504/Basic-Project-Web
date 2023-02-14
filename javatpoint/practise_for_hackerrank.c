#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
	int arr[MAX_SIZE][MAX_SIZE];
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("Enter element (%d, %d): ", i+1, j+1);
			scanf("%d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i > j)
			{
				arr[i][j] = 0;
			}
		}
	}
	printf("Upper triangular matrix: \n");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}