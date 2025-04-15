#include <stdio.h>

/*
    Soluzione alternativa alla soluzione dell'esercizio 12.1.
*/

double media(int *a, int l)
{
    double s = 0;
    for (int i = 0; i < l; i++)
    {
        s += *(a + i);
    }
    return s / l;
}

double pow2(double n)
{
    return n * n;
}

double varianza(int *a, int l)
{
    double av = media(a, l);

    double s = 0;
    for (int i = 0; i < l; i++)
    {
        s += pow2(*(a + i) - av);
    }

    return s / l;
}

// funzione ausiliaria per stampare i valori di un array
void print_array(int a[], int N)
{
    for (int i = 0; i < N; i++)
        printf("a[%d] = %d\n", i, a[i]);
    printf("\n");
}

void main()
{
    int n = 5;
    int a[5] = {1, 2, 3, 4, 5};

    print_array(a, n);

    double var = varianza(a, n);

    printf("La varianza dell'array è %f\n", var);
}