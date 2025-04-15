// Letti due numeri `a` e `b` da tastiera, determina e stampa diverse informazioni

#include <stdio.h>

int main() {
  int a, b; // Chiediamo `a` e `b` all'utente
  printf("Inserire a: ");
  scanf("%d", &a);
  printf("Inserire b: ");
  scanf("%d", &b);

  // Determina e stampa se `b` è negativo o no
  if(b >= 0)
    printf("%d è non negativo\n", b);
  else
    printf("%d è negativo\n", b);

  // Determina e stampa se `a` è pari o dispari
  int tmp = a;

  if(a < 0) // Se `a` è negativo
    tmp *= -1;

  while(tmp > 1) // Sottraggo 2 ad `a` finchè non rimango con 1 o 0
    tmp -= 2;

  if(tmp == 0)
    printf("%d è pari\n", a);
  else
    printf("%d è dipari\n", a);

  // Determina e stampa il valore di `a + b`
  printf("Somma: %d\n", a + b);

  // Determina quale combinazioni di segni porta al massimo e lo stampa:
  if(a >= 0 && b >= 0)
    printf("(+a) + (+b) = %d porta al massimo risultato\n", a + b);
  else if(a < 0 && b >= 0)
    printf("(-a) + (+b) = %d porta al massimo risultato\n", - a + b);
  else if(a >= 0 && b < 0)
    printf("(+a) + (-b) = %d porta al massimo risultato\n", a - b);
  else
    printf("(-a) + (-b) = %d porta al massimo risultato\n", - a - b);

  return 0;
}
