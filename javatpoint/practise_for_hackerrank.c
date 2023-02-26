#include <stdio.h>

int add(int start, int end)
{
	if (start >= end)
		return start;
	return (start + add(start+2, end));
}

int main(void)
{
	int start, end, plus;
	printf("Enter range: ");
	scanf("%d %d", &start, &end);
	plus = add(start, end);
	printf("Sum: %d\n", plus);
	return 0;
}