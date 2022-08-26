#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Declaring Functions
string input(void);
string cipher(string s, string a);
void output(string s);
void valid(int l, string key);

// Main Function
int main(int l, string key[])
{
    if (l != 1)
    {
        string a = key[1];
        valid(l, a);
        string  s = input();
        s = cipher(s, a);
        output(s);
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

// Checking validity for 26 chars and alphabets
void valid(int l, string key)
{
    int c = 0;
    int n = strlen(key);
    if (l == 2 && n == 26)
    {
        for (int i = 0; i < n; i++)
        {
            if (isalpha(key[i]))
            {
                c = 0;
            }
            else
            {
                printf("Key must have 26 characters\n");
                break;
            }
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
    }
}

// Taking Plain Text
string input(void)
{
    string s = get_string("plainText:  ");
    return s;
}

// Converting to Cipher Text
string cipher(string s, string a)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        int n1 = 65, n2 = 97;
        if (isupper(s[i]))
        {
            while ((n1 - 65) < 26)
            {
                if (s[i] == n1)
                {
                    s[i] = a[(n1 - 65)];
                    break;
                }
                n1++;
            }
            s[i] = toupper(s[i]);
        }
        if (islower(s[i]))
        {
            while ((n2 - 97) < 26)
            {
                if (s[i] == n2)
                {
                    s[i] = a[(n2 - 97)];
                    break;
                }
                n2++;
            }
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

// Printing Output
void output(string s)
{
    printf("ciphertext: %s\n", s);
}