/*
#include<stdio.h>
#include<stdbool.h>
#include<string.h>


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


char str[100];

void copyMain()
{
	printf("\n");
}

void rev(int num)
{
	int i, n = strlen(str);
	if (num == n)
	{
		copyMain();
	}
	else
	{
		for (i = num; i < n; i++)
		{
				printf("%c", str[n - 1 - i]);
		}
		rev(i);
	}
}

int main(void)
{
	printf("Enter a sentence : ");
	scanf("%s", str);
	rev(0);
	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h>

int main(void)
{
    char mystrg[60];
    int leng, g;

    // Printing the program name and what the program will do
    printf("Program in C for reversing a given string \n ");
    printf("Please insert the string you want to reverse: ");

    // fetch the input string from the user
    scanf( "%s", mystrg );

    // This will find the length of your string with the help of strlen() function of string.h header file
    leng = strlen(mystrg);

    // iterate through each and every character of the string for printing it backwards or reverse direction
    for(g = leng - 1; g >= 0; g--) {

        printf("%c", mystrg[g]);
    }
    return 0;
}*/

#include <stdio.h>

int power(int num, int n);

int main()
{
	int num, pow, n;
    printf("Enter a number and its power: ");
	scanf("%d %d", &num, &n);
    pow = power(num, n);
	printf("Power = %d\n", pow);
    return 0;
}

int power(int num, int n)
{
    if (num != 0)
 	{
		return num * power(num, n-1);
	}
    else
	{
		return num;
	}
}