#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

// Declaring Functions
string input(void);
string cipher(string s, int key);
void output(string s);

int main(int l, string key[])
{
    if(isdigit(key))
    {
        string  s = input();
        string cipher_text = cipher(s, key);
        void output(cipher_text);
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

// Taking Plain Text
string input(void)
{
    string s = get_string("Plain Text:  ");
    return s;
}

// Converting to Cipher Text
string cipher(string s, int key)
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
    printf("\nCiphertext: %s", s);
}