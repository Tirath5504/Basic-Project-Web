#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *arr, i;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    int *arr2 = NULL;;
    for (i = 0; i < n; i++)
    {
        arr2[i] = arr[n - i - 1];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = arr2[i];
    }
    /* Write the logic to reverse the array. */

    for(i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    return 0;
}