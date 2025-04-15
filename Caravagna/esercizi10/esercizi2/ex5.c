// Dati `n` e `k` interi ne calcola il coefficente binomiale

#include <stdio.h>

int main() {
  int n, k; // Chiediamo `n` e `k` all'utente
  printf("Inserire n: ");
  scanf("%d", &n);
  printf("Inserire k: ");
  scanf("%d", &k);
  int coeff_bin = 0;

  if(n >= k) { // Se `n` è maggiore o uguale a `k` uso la formula altrimenti rimane 0
    int n_fact = 1;
    int k_fact = 1;
    int nk_fact = 1;

    for (int i = n; i > 0; i--) {
        if (i <= k)
            k_fact *= i; // Calcolo `k!`

        if (i <= (n - k))
            nk_fact *= i; // Calcolo `(n - k)!`

        n_fact *= i; // Calcolo `n!`
    }

    coeff_bin = n_fact / (k_fact * nk_fact); // Uso la formula
  }

  printf("Coefficente binomiale di %d su %d: %d\n", n, k, coeff_bin);
  return 0;
}
