#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Declaring Functions
string input(void);
int length(string s);
int letters(string s, int n);
int words(string s, int n);
int sentences(string s, int n);
int index(int n_l, int n_w, int n_s);
void output(int i);

// Main Function
int main(void)
{
    string s = input();
    int n = length(s);
    int n_l = letters(s, n);
    int n_w = words(s, n);
    int n_s = sentences(s, n);
    int i = index(n_l, n_w, n_s);
    output(i);
}

// Taking input
string input(void)
{
    return get_string("Enter your text: \n");
}

// Computing Length of text
int length(string s)
{
    return strlen(s);
}

// Counting letters
int letters(string s,int n)
{
    int n1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(isalpha(s[i]))
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

// Computing index
int index(int n_l, int n_w, int n_s)
{
    int l = ((n_l) / (n_w)) * 100.0;
    int s = ((n_s) / (n_w)) * 100.0;
    int i = round((0.0588 * l) - (0.026 * s) - 15.8);
    return i;
}

// Printing output
void output(int n)
{
    if(n >= 1 && n <= 16)
    {
        printf("Grade %i \n", n);
    }
    else if(n > 16)
    {
        printf("Grade 16+ \n");
    }
    else
    {
        printf("Before Grade 1");
    }
}