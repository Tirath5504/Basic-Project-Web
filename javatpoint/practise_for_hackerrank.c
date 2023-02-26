#include <stdio.h>

#define MAX 10

int m1[MAX][MAX], m2[MAX][MAX], res[MAX][MAX];

void input(int mat[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter element (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
}

void multiply(int mat1[MAX][MAX], int mat2[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				res
			}
		}
	}
}

int main(void)
{
	int n1a, n1b, n2a, n2b;
	printf("Enter order of Matrix 1: ");
	scanf("%d %d", &n1a, &n1b);
	input(m1[][], n1a, n1b);
	printf("Enter order of Matrix 2: ");
	scanf("%d %d", &n2a, &n2b);
	input(m2[][], n2a, n2b);
	if (n1b == n2a)
		multiply(m1[][], m2[][], n1a, n1b);
	else
		printf("Matrixes not compatible for multiplication");
	printf("\n");
	return 0;
}