#include <stdio.h>

void init_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int prod_scalare(int a[], int b[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res += a[i] * b[i];
    }

    return res;
}

void main()
{
    int n = 5;
    int a[5];
    int b[5];
    iniz_array(a, n);
    iniz_array(b, n);

    int prod = prod_scalare(a, b, n);
    printf("Prodotto scalare = %d\n", prod);
}