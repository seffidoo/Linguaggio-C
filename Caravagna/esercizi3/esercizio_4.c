// Implementiamo una funzione che testerà se un numero è primo o no

#include <stdio.h>

int test_primo(int n){
  for(int i = 2; i <= n/2; i++){ // devo dividere n per i numeri da 1 fino alla sua metà
    if(n % i == 0) // se il resto della divisione tra n e i è 0, significa che i è un divisiore di n
      return 0; // ritorniamo 0 (falso)
  }
  return 1; // se riusciamo ad uscire dal ciclo, significa che nessun numero era divisore, e dunque il numero è primo
}

int main(){ // contiamo quanti numeri primi ci sono tra 1 e 100
  int primi = 0; // contatore dei numeri primi
  for(int i = 1; i <= 100; i++){
    if(test_primo(i) == 1)
      primi++;
  }
  printf("Numero di numeri primi trovati da 1 a 100: %d", primi);
}
