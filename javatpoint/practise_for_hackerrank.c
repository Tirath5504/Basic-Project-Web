// WAP to swap variables with help of three variables

#include<stdio.h>

int main(void)
{
	int n1;
	printf("Enter a number : ");
	scanf("%d", &n1);
	if (n1 % 100 == 0 && n1 % 400 == 0)
		printf("Leap Year\n");
	else if (n1 % 4 == 0 && n1 % 100 != 0)
		printf("Leap Year\n");
	else
		printf("Not a leap Year\n");
	return 0;
}