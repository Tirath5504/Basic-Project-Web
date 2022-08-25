#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Declaring Functions
string input(void);
string cipher(string s, int k);
void output(string ct);
int valid(int l, string key);

// Main Function
int main(int l, string key[])
{
    int k = atoi(key[1]);
    int r = valid(l, key[1]);
    string  s = input();
    string cipher_text = cipher(s, k);
    void output(string cipher_text);
    return r;
}

// Checking if key is valid
int valid(int l, string key)
{
    int k = atoi(key[1]);
    string a = key[1];
    int n = strlen(a);
    if(l == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if(isdigit(a[i]))
            {
                return 0;
            }
            else
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("Usage: ./caesar key");
    }
}

// Taking Plain Text
string input(void)
{
    string s = get_string("Plain Text:  ");
    return s;
}

// Converting to Cipher Text
string cipher(string s, int k)
{
    int n = strlen(s);
    for(int i = 0; i < n; i++)
    {
        s[i] = s[i] + k;
    }
    return s;
}

// Printing Output
void output(string s)
{
    printf("\nCiphertext: %s\n", s);
}