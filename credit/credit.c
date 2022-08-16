#include <cs50.h>
#include <stdio.h>

// Declaring functions
int get_number(void);
string get_type(int n);

int main(void)
{
    // Asking user their credit card number
    int n = get_number();

    //Checking what type of card they use
    string type = get_type(n);
    printf("%s \n", type);


}

int get_number(void)
{
    long n;
    do
    {
        n = get_long("Enter your credit card number");
    }
    while (n < 1000000000000);
    return n;
}

string get_type(int n)
{
    if(n % 10000000000000 == 34 || n % 10000000000000 == 37)
    {
        return "American Express";
    }
    else if(n % 100000000000000 == 51 || n % 100000000000000 == 52 || n % 100000000000000 == 53 || n % 100000000000000 == 54 || n % 100000000000000 == 55)
    {
        return "MasterCard";
    }
    else if(n % 1000000000000000 == 4 || n % 100000000000000 == 4 || n % 10000000000000 == 4 || n % 1000000000000 == 4)
    {
        return "Visa";
    }
    else
    {
        return "Invalid Card Number";
    }
}
