/*Si scriva un programma per calcolare la media aritmetica di una serie di numeri x1,...,xn, ovvero
x (segnato) = 1/n * somma da i a n di x(i)

L’introduzione del valore 0 indica il termine del caricamento dei dati.
Esempio di output.
> Inserisci un numero (x_i): 10
> Inserisci un numero (x_i): 10
> Inserisci un numero (x_i): 5
> Inserisci un numero (x_i): 1
> Inserisci un numero (x_i): 15
> Inserisci un numero (x_i): 0
> La media dei numeri inseriti è = 8.2*/

#include <stdio.h>

 int main(){
    int x; 
    int tot=0;
    int indice=0;

    while(1){
        printf("inserisci un numero (x_i): ");
        scanf("%d", &x);
        printf("\n");
        tot=tot+x;
       if (x==0) break;
        indice++;       
    }

    
    float numero = tot/indice;
    printf("la media dei numeri e = %f", numero);
    return 0;
 }