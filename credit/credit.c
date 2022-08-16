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
    printf("%s \n", valid);
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

//Checking which company's credit card it is
string get_type(long n)
{
    if (n / 10000000000000 == 34 || n / 10000000000000 == 37)
    {
        return "American Express";
    }
    else if (n / 100000000000000 == 51 || n / 100000000000000 == 52 || n / 100000000000000 == 53 || n / 100000000000000 == 54 || n / 100000000000000 == 55)
    {
        return "MasterCard";
    }
    else if (n / 1000000000000000 == 4 || n / 1000000000000 == 4)
    {
        return "Visa";
    }
    else
    {
        return "Invalid Card Number";
    }
}

// Finding if the number is valid
string valid_number(long n)
{
    long n1;
    int sum1 = 0, sum2 = 0, sum3 = 0;
    long n2 = n / 10;
    while (n > 0)
    {
        n1 = n % 10;
        n1 = n1 * 2;
        while (n1 > 0)
        {
            sum1 = sum1 + (n1 % 10);
            n1 = n1 / 10;
        }
        sum2 = sum2 + sum1;
        sum3 = sum3 + (n2 % 10);
        n = n / 100;
        n2 = n2 / 100;
    }
    if (((sum2 + sum3) % 10) == 0)
    {
        return "Valid Number";
    }
    else
    {
        return "Invalid Number";
    }
}
