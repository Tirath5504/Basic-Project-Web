#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Declaring Functions
string input(void);
string cipher(string s, string a);
void output(string s);
int valid(int l, string key);

// Main Function
int main(int l, string key[])
{
    if (l != 1)
    {
        string a = key[1];
        int r = valid(l, a);
        if (r == 1)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
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

// Checking if key is valid
int valid(int l, string key)
{
    int c = 0;
    int n = strlen(key);
    if (l == 2 && n == 26)
    {
        for (int i = 0; i < n; i++)
        {
            if (isalpha(key[i]))
            {
                for (int j = 0; j < n; j++)
                {
                    if (j != i)
                    {
                        if (key[i] != key[j])
                        {
                            c = 0;
                        }
                        else
                        {
                            c = 1;
                            break;
                        }
                    }
                }
            }
            else
            {
                c = 1;
                break;
            }
        }
    }
    else
    {
        c = 1;
    }
    return c;
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