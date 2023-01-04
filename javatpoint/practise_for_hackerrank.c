// WAP to swap variables with help of three variables

#include<stdio.h>

int main(void)
{
	int n1;
	printf("Enter a number : ");
	scanf("%d", &n1);
	n1 % 2 ? printf("Odd number"): printf("Even Number");
	return 0;
}