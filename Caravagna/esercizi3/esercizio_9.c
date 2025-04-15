/*
Implementiamo una funzione che calcoli il termine n-esimo della serie
s_n = \sum_{i=1}^n (i * k^{i+1}) / 3^i
dove k è un parametro reale della funzione
*/

#include <stdio.h>
#include <math.h>

double s_n(unsigned int n, double k){
  double a_i = pow(k,2) / 3; // il primo termine della successione "interna"
  double s_i = a_i; // il primo termine della successione delle somme
  printf("s_1 = %lf\n", s_i);
  for(int i = 2; i <= n; i++){
    a_i = (i * pow(k,i+1)) / pow(3,i); // aggiorniamo con il nuovo valore della successione interna
    s_i += a_i; // aggiorniamo il valore della successione somma
    printf("s_%d = %lf\n", i, s_i);
  }
}

int main(){
  double k;
  unsigned int n;
  printf("Dammi il valore di k: ");
  scanf("%lf", &k);
  printf("Dammi il valore di n: ");
  scanf("%ud", &n);
  s_n(n,k); // utilizziamo un grande n per controllare che la serie converga, eventualmente, ad un limite
}