#include <cs50.h>
#include <stdio.h>

// Declaring Functions
string input(void);
int letters(string s);
int words(string s);
int sentences(string s);

// Main Function
int main(void)
{
    string s = input();
    int n_l = letters(s);
    int n_w = words(s);
    int n_s = sentences(s);
    output(n_l, n_w, n_s);
}

// Taking input
string input(void)
{
    return get_string("Enter your text: \n");
}

// Counting letters
int letters(string s);
{
    
}