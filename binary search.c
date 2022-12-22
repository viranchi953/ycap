#include <stdio.h>

int main()
{
    int A[10], n, mid = 0, low = 0, high = 0, s;
    printf("enter no. of terms in array\n");
    scanf("%d", &n);
    printf("array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("search no :\n");
    scanf("%d", &s);
    high = n - 1;
    mid = (low + high) / 2;
    while (s != A[mid])
    {
        mid = (low + high) / 2;
        if (A[mid] < s)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("no. %d found at index %d", A[mid], mid);
    return 0;
}
