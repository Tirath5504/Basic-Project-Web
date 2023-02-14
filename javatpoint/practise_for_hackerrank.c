#include <stdio.h>

#define MAX_SIZE 100

int main(void)
{
	int arr[MAX_SIZE];
	int n, lar1, lar2;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter element %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	lar1 = arr[0], lar2 = arr[1];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < lar1 && arr[i] > lar2)
		{
			lar2 = arr[i];
		}
		else if (arr[i] > lar1)
		{
			lar1 = arr[i];
		}
	}
	printf("Second Largest: %d\n", lar2);
	return 0;
}