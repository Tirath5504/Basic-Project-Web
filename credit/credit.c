#include <cs50.h>
#include <stdio.h>

// Declaring functions
long get_number(void);
string get_type(long n);
string valid_number(long n);

int main(void)
{
    // Asking user their credit card number
    long n = get_number();

    // Checking what type of card they use
    string type = get_type(n);
    printf("%s \n", type);

    // Checking if number is valid
    string valid = valid_number(n);
    printf(" %s ", valid);
}

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

string get_type(long n)
{
    if(n / 10000000000000 == 34 || n / 10000000000000 == 37)
    {
        return "American Express";
    }
    else if(n / 100000000000000 == 51 || n / 100000000000000 == 52 || n / 100000000000000 == 53 || n / 100000000000000 == 54 || n / 100000000000000 == 55)
    {
        return "MasterCard";
    }
    else if(n / 1000000000000000 == 4 || n / 1000000000000 == 4)
    {
        return "Visa";
    }
    else
    {
        return "Invalid Card Number";
    }
}

string valid_number(long n)
{
    int n1, sum1, sum2, sum3;
    int n2 = n % 10;
    while (n > 0)
    {
        n1 = n % 100;
        n1 = n1 * 2;
        while (n1 > 0)
        {
            sum1 = sum1 + (n1 % 10);
            n1 = n1 / 10;
        }
        sum2 = sum2 + sum1;
        sum3 = sum3 + (n2 % 100);
        n = n / 10;
    }
    if(((sum2 + sum3) % 10) == 0)
        {
            return "Valid Number";
        }
    else
        {
            return "Invalid Number";
        }
}
