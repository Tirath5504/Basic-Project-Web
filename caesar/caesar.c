#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// Declaring Functions
string input(void);
string cipher(string s, int k);
void output(string s);

int main(int l, string key[])
{
    if(isdigit(key[1]) && l == 1)
    {
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    string  s = input();
    int k = atoi(key[1]);
    string cipher_text = cipher(s, k);
    void output(cipher_text);
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
        s[i] = s[i] + key;
    }
    return s;
}

// Printing Output
void output(string s)
{
    printf("\nCiphertext: %s\n", s);
}