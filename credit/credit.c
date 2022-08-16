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
    while (n > 1000000000000);
    return n;
}

string get_type(int n)
{
    if(n % 10000000000000 == 3)
    {
        return "American Express";
    }
    else if(n % )
}
