// Stampa la sequenza di Fibonacci fino all'elemento `n`-esimo inserito da tastiera

#include <stdio.h>

int main() {
  int n;
  printf("Inserire n: ");
  scanf("%d", &n);

  // Inizializzo e stampo i primi due valori della successione
  int F0 = 0, F1 = 1; 
  printf("F(0) = %d\n", F0);
  printf("F(1) = %d\n", F1);

  // Se `i > 1` inizializzo gli elementi `i - 1`-esimo e `i - 2`-esimo
  int Fi, Fi_1 = F1, Fi_2 = F0; 

  for(int i = 2; i <= n; i++) {
    Fi = Fi_1 + Fi_2; // Uso la formula per calcolare l'elemento `i`-esimo
    printf("F(%d) = %d\n", i, Fi);
    Fi_2 = Fi_1; // Aggiorno per calcolare l'elemento `i + 1`-esimo
    Fi_1 = Fi;
  }

  return 0;
}
