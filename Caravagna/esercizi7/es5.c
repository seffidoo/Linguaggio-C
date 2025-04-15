#include <stdio.h>

void triang(int a[], int n)
{
    int tmp;
    for (int i = 0; i < n; i++)
    {
        tmp = 0;
        for (int j = 1; j <= i; j++)
            tmp += j;
        a[i] = tmp;
    }
}

void print_array(int a[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void main()
{
    int n = 10;
    int a[10];

    triang(a, n);

    print_array(a, n);
}