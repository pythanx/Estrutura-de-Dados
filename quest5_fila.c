//
// Created by adm-g on 13/05/2026.
/*
*A utilização de filas é muito comuns em sistemas WEB nos quais requisições chegam aos montes nos servidores de nossas aplicações. Por isso, um(a) estudante aplicado deve ser capaz de utilizar tal estrutura de dados. Dessa forma, considere uma fila de inteiros com o seguinte estado inicial, na qual o início aponta para o elemento 16 e o fim aponta para o elemento 42:

início => 16, 77, 56, 52, 42 <= fim

Sabendo que as funções Push_back(int dado) e Pop() são as funções de inserção e remoção na fila, respectivamente, imagine que, a partir do estado inicial da fila, as seguintes operações são invocadas, respeitando a ordem a seguir:

Pop();
Pop();
Push(12);
Push(80);
Pop();
Push(66);
Pop();
Fonte: o autor.

Dessa forma, podemos dizer que o estado final da fila será algo como:
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define tam 6

struct fila {
 int dados[tam];
 int ini, fim;
};

struct fila f;

int pop();
void push_back(int valor);

int main() {
 setlocale(LC_ALL, "Portuguese");


 f.dados[0] = 16;
 f.dados[1] = 77;
 f.dados[2] = 56;
 f.dados[3] = 52;
 f.dados[4] = 42;

 f.ini = 0;
 f.fim = 5;

 pop();
 pop();
 push_back(12);
 push_back(80);
 pop();
 push_back(66);
 pop();



 // Mostrar resultado da fila
 printf("\nFila final: [ ");
 int i = f.ini;
 while (i != f.fim) {
  printf("%d ", f.dados[i]);
  i = (i + 1) % tam;
 }
 printf("]\n");
}

// Remove um elemento da fila
int pop() {
 if (f.fim == f.ini) {
  printf("\nFila vazia!\n");
  return -1;
 } else {
   int valor = f.dados[f.ini];
  f.ini = (f.ini + 1) % tam;
  return valor;
 }
}

// Add um elemento à fila
void push_back(int valor) {
 if ((f.fim + 1) % tam == f.ini) {
  printf("\nFila cheia!\n");
 }
 else {
  f.dados[f.fim] = valor;
  f.fim = (f.fim + 1) % tam;;
 }
}