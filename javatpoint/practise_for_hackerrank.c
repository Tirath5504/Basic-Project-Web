#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int MAX_LEN = 40;

int main()
{
    char ch;
    scanf("%c", ch);
    printf("%c", ch);
    char s[MAX_LEN];
    scanf("%[^\n]%c", s);
    printf("%c", s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}