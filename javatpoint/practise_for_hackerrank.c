/*
#include <stdio.h>

#define MAX 10

int res[MAX][MAX];

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
	printf("\n");
}

void multiply(int mat1[MAX][MAX], int mat2[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				res[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("\n");
}

void print(int mat[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int n1a, n1b, n2a, n2b;
	int m1[MAX][MAX], m2[MAX][MAX];
	printf("Enter order of Matrix 1: ");
	scanf("%d %d", &n1a, &n1b);
	input(m1, n1a, n1b);
	printf("Enter order of Matrix 2: ");
	scanf("%d %d", &n2a, &n2b);
	input(m2, n2a, n2b);
	if (n1b == n2a)
	{
		multiply(m1, m2, n1a, n2b);
		print(res, n1a, n2b);
	}
	else
	{
		printf("Matrixes not compatible for multiplication");
	}
	printf("\n");
	return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX 100

int main(void)
{
	char str[MAX];
	int characters = 0, lines = 1, words = 1;
	printf("Enter a string ending with '.' : ");
	scanf("%[^.]%s", &str);
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		if (isalnum(str[i]))
			characters++;
		if (isspace(str[i]))
			words++;
		if (iscntrl(str[i]))
			lines++;
	}
	printf("Characters = %d\n", characters);
	printf("Words = %d\n", words);
	printf("Lines = %d\n", lines);
	return 0;
}