#include <stdio.h>
#include <stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};

typedef struct elemento elementoLista;
typedef elementoLista * lista;

elementoLista * add(elementoLista * coda, int n){
  elementoLista * nuovo = malloc(sizeof(elementoLista));
  nuovo -> info = n;
  nuovo -> next = NULL;
  coda -> next = nuovo;
  return nuovo;
}

lista create_list(){
  int n = 0;
  lista testa = NULL;
  printf("Inserisci un numero: ");
  scanf("%d",&n);
  if(n == -1)
    return testa;
  elementoLista * nuovo = malloc(sizeof(elementoLista));
  nuovo -> info = n;
  nuovo -> next = NULL;
  testa = nuovo;
  elementoLista * coda = nuovo;
  printf("Inserisci un numero: ");
  scanf("%d",&n);
  while(n != -1){
    /*nuovo = malloc(sizeof(elementoLista));
    nuovo -> info = n;
    nuovo -> next = NULL;
    coda -> next = nuovo;
    coda = nuovo;*/
    coda = add(coda, n);
    printf("Inserisci un numero: ");
    scanf("%d",&n);
  }
  return testa;
}

void print_list(lista a){
  if(a == NULL)
    return;
  printf("%d\n",a->info);
  print_list(a->next);
}

void main(){
  lista a = create_list();
  print_list(a);
}