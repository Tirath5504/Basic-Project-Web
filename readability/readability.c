#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Declaring Functions
string input(void);
int length(string s);
int letters(string s, int n);
int words(string s);
int sentences(string s);
void output(int n1, int n2, int n3);

// Main Function
int main(void)
{
    string s = input();
    int n = length(s);
    int n_l = letters(s,n);
    int n_w = words(s,n);
    int n_s = sentences(s,n);
    output(n_l, n_w, n_s);
}

// Taking input
string input(void)
{
    return get_string("Enter your text: \n");
}

// Computing Length of text
int length(string s);
{
    return strlen(s);
}

// Counting letters
int letters(string s,int n)
{
    int n1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(isalphabet(s[i]))
        {
            n1++;
        }
    }
    return n1;
}

// Counting words
int words(string s, int n)
{
    int n1 = 1;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == ' ')
        {
            n1++;
        }
    }
    return n1;
}

// Counting sentences
int sentences(string s, int n)
{
    int n1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            n1++;
        }
    }
    return n1;
}

// Printing output
void output(int n_l, int n_w, int n_s)
{
    
}