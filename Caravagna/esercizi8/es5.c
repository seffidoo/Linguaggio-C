#include <stdio.h>

void scambia(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int min_idx(int a[], int start, int end)
{
    int min_i = start;
    for (int j = start + 1; j < end; j++)
        if (a[j] < a[min_i])
            min_i = j;
    return min_i;
}

// Function to perform Selection Sort
void selection_sort(int a[], int n)
{
    int min_i;

    for (int i = 0; i < n - 1; i++)
    {
        // troviamo l'indice del minimo elemento
        min_i = min_idx(a, i, n);

        scambia(&a[min_i], &a[i]); // scambia il minimo con il corrente
    }
}

void sort_wave(int a[], int n)
{
    selection_sort(a, n);

    for (int i = 0; i < n - 1; i += 2)
        scambia(&a[i], &a[i + 1]);
}

void print_array(int a[], int N)
{
    for (int i = 0; i < N; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void main()
{
    int a[] = {10, 90, 49, 2, 1, 5, 23};
    int n = 7;

    sort_wave(a, n);

    print_array(a, n);
}