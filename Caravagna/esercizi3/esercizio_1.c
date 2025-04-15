/*
Si scriva una funzione che riceva in ingresso tre numeri interi x,y e z ne restituisca il minimo
  */
#include <stdio.h>

int minimo_di_tre(int a, int b, int c) 
{
  //variabile dove memorizzare il min 
  int min;
  //confronto a e b
  if(a<=b) {
    //metto in min il più piccolo tra a e b
    min = a; 
  }
  else if(a<b) {
    min = b;
  }
  //devo confrontare min con c 
  if(c<=min) {
    min = c; 
  }
  //se c>min non faccio niente:
  //il minimo cercato è già in min 
  return min;
}

void test(int a, int b){
  int max;
  // seleziono il massimo tra a e b
  if(a>=b){
    max = a;
    }
  else{
    max = b;
  }

  for(int i = 1; i <= max; i++){ // devo ciclare da 1 a max{a,b}
    printf("tripletta (%d, %d, %d) - minimo -> %d\n",a,b,i,minimo_di_tre(a,b,i));
  }
  
}

int main() {
  //var dove leggere gli input
  int x, y;
  printf("Inserisci il numero (x): ");
  scanf("%d", &x);
  printf("Inserisci il numero (y): ");
  scanf("%d", &y);
  //testo la funzione
  test(x,y);
  return(0);
}