#include<stdio.h>
#include<stdbool.h>
#include<string.h>

/*
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
*/

void rev(int num)
{
	if (num == )

	for (int i = num, n = strlen(str); i < n; i++)
	{
			printf("%c", str[n - 1 - i]);
	}
}

int main(void)
{
	char str[100], copy[100];
	printf("Enter a sentence : ");
	scanf("%s", str);
	rev(0);
	printf("\n");
	return 0;
}

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