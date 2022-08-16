#include <cs50.h>
#include <stdio.h>

int get_number(void);

int main(void)
{
    int n = get_number(void);
}

int get_number(void)
{
    do
    {
        long n = get_long("Enter your credit card number");
    }
    while (n > 1000000000000);
}
