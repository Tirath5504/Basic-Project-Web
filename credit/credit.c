#include <cs50.h>
#include <stdio.h>

// Declaring functions
long get_number(void);
int get_type(long n);
int valid_number(long n);
void print(int n1, int n2);

int main(void)
{
    // Asking user their credit card number
    long n = get_number();

    // Checking what type of card they use
    int company = get_type(n);


    // Checking if number is valid
    int valid = valid_number(n);

    // Printing result
    void print(company , valid);
}

// Taking credit card number from user.
long get_number(void)
{
    long n;
    do
    {
        n = get_long("Enter your credit card number ");
    }
    while (n < 1000000000000);
    return n;
}

// Checking which company's credit card it is
int get_type(long n)
{
    if (n / 10000000000000 == 34 || n / 10000000000000 == 37)
    {
        return 1;
    }
    else if (n / 100000000000000 == 51 || n / 100000000000000 == 52 || n / 100000000000000 == 53)
    {
        return 2;
    }
    else if (n / 100000000000000 == 54 || n / 100000000000000 == 55)
    {
        return 2;
    }
    else if (n / 1000000000000000 == 4 || n / 1000000000000 == 4)
    {
        return 3;
    }
    else
    {
        return 4;
    }
}

// Finding if the number is valid
int valid_number(long n)
{
    long n1;
    long sum1 = 0, sum2 = 0, sum3 = 0;
    long n2 = n / 10;
    while (n > 0)
    {
        n1 = n2 % 10;
        n1 = n1 * 2;
        sum1 = 0;
        while (n1 > 0)
        {
            sum1 = sum1 + (n1 % 10);
            n1 = n1 / 10;
        }
        sum2 = sum2 + sum1;
        sum3 = sum3 + (n % 10);
        n = n / 100;
        n2 = n2 / 100;
    }
    if (((sum2 + sum3) % 10) == 0)
    {
        return 10;
    }
    else
    {
        return 11;
    }
}

// Printing result
void print(int n1, int n2)
{
    if (n1 == 1 && n2 == 10)
    {
        printf("AMEX\n");
    }
    else if (n1 == 2 && n2 == 10)
    {
        printf("MASTERCARD\n");
    }
    else if (n1 == 3 && n2 == 10)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
