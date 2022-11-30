#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k)
{
    //Write your code here.
    int and = 0, or = 0, exor = 0;
    int t, s, r;
    for(int i = 1; i < n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            t = i & j;
            if (t > and && t <= k)
                and = t;
            s = i | j;
            if (s > or && s <= k)
                or = s;
            r = i ^ j;
            if (r > exor && r <= k)
                exor = r;
        }
    }
    printf("%d\n%d\n%d\n", t, s, r);
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}