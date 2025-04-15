// Legge da tastiera un numero, dice se è non negativo o no, stampa il valore assoluto

#include <stdio.h>

int main() {
  float x;
  printf("Inserire x: ");
  scanf("%f", &x);

  if(x >= 0) { // Se `x` è non negativo
    printf("%f è non negativo\n", x);
    printf("Valore assoluto: %f\n", x);
  } else { // Se `x` è positivo
    printf("%f è negativo\n", x);
    printf("Valore assoluto: %f\n", -x);
  }

  return 0;
}
