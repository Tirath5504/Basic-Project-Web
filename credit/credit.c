#include <cs50.h>
#include <stdio.h>

int get_number(void);

int main(void)
{
    int n = get_number();
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
