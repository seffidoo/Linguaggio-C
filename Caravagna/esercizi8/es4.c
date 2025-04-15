#include <stdio.h>
#include <stdlib.h>

int *counting_sort(int *a, int n, int k)
{
    int *c = (int *)malloc(sizeof(int) * k + 1);
    for (int i = 0; i < k + 1; i++)
        *(c + i) = 0;

    for (int i = 0; i < n; i++)
        *(c + a[i]) += 1;

    for (int j = 1; j < k + 1; j++)
        *(c + j) = *(c + j) + *(c + j - 1);

    int *b = (int *)malloc(sizeof(int) * n);
    for (int i = n - 1; i >= 0; i--)
    {
        *(b + *(c + a[i]) - 1) = *(a + i);
        *(c + a[i]) -= 1;
    }
    free(c);
    return b;
}

void main()
{
    int a[] = {0, 10, 1, 8, 5, 3, 2, 5, 5, 9};
    int *b = counting_sort(a, 10, 10);
    for (int i = 0; i < 10; i++)
        printf("%d, ", *(b + i));
    printf("\n");
    free(b);
}