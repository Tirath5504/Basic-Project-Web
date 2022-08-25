#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Declaring Functions
string input(void);
string cipher(string s, int k);
void output(string ct);

int main(int l, string key[])
{
    int k = atoi(key[1]);
    if(isdigit(k) && l == 1)
    {
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string  s = input();
    string cipher_text = cipher(s, k);
    void output(string cipher_text);
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