#include <stdio.h>

/*
    Si scriva una funzione ricorsiva che prenda come input un intero positivo n e il puntatore della variabile h, che
    conterrà il seguente risultato: h(n) = sum_{i=1}^n 1/i = 1 + 1/2 + ... + 1/n.

    Definire la funzione come -> void somma_armonica(int n, double *h)
*/

// la funzione è void -> nessun return
void somma_armonica(int n, double *h)
{
    if (n == 1)
        *h = 1.0;
    else
    {
        somma_armonica(n - 1, h);
        *h = 1.0 / n + *h;
    }
}

void main()
{
    int n = 5;
    double h;

    // passiamo alla funzione l'indirizzo di memoria della variabile h
    somma_armonica(n, &h);
    printf("Somma armonica = %f\n", h);
}