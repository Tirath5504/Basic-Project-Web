// WAP to swap variables with help of three variables

#include<stdio.h>

int main(void)
{
	int n1;
	clrscr();
	printf("Enter a number : ");
	scanf("%d", &n1);
	if (n1 % 2 == 0)
		printf("Even number\n");
	else
		printf("Odd number\n");
	printf("Numbers after swap : %d, %d", &n1, &n2);
	getch();
	return 0;
}