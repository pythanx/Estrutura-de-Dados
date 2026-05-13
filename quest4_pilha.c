//
// Created by adm-g on 12/05/2026.
//
/*
*Todo(a) estudante de programação que se preze deve saber, obrigatoriamente, utilizar estruturas de dados para resolver problemas diversos. Assim sendo, considere uma pilha de inteiros com o seguinte estado inicial, na qual o topo aponta para o elemento 78:

10, 15, 22, 17, 25, 78 <= topo

Sabendo que as funções Push(int dado) e Pop() são as funções de inserção e remoção na pilha, respectivamente, imagine que, a partir do estado inicial da pilha, as seguintes operações são invocadas, respeitando a ordem a seguir:

Pop();
Pop();
Pop();
Push(66);
Pop();
Push(16);
Push(42);
Push(99);
Pop();
Fonte: o autor.

Dessa forma, podemos dizer que o estado final da pilha será algo como:
 */

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Constantes
#define tam 6

// Estrutura da pilha
struct pilha {
 int dados[tam];
 int topo;
};

// Variaveis
struct pilha p;

//Protótipos
void pop();
void push(int valor);

// Função principal
int main() {
 setlocale(LC_ALL, "Portuguese");



 // inicializa o topo e o fim da pilha com zero = pilha vazia
 p.topo = 0;

 p.dados[0] = 10;
 p.dados[1] = 15;
 p.dados[2] = 22;
 p.dados[3] = 17;
 p.dados[4] = 25;
 p.dados[5] = 78;
 p.topo = 6;

 // Executar a sequência
 pop();      // 1º pop
 pop();      // 2º pop
 pop();      // 3º pop
 push(66);
 pop();
 push(16);
 push(42);
 push(99);
 pop();

 // Mostrar resultado
 printf("Pilha final: \n");
 for (int i = 0; i < p.topo; i++) {
  printf("%d ", p.dados[i]);
 }
 return 0;
}

// Cria a função pop para remover elemento à pilha
 void pop() {
  if (p.topo == 0) {
   printf("Pilha vazia!");
  }
  else {
   p.topo--;
  }
 }

 // Cria a função para add elemento à pilha
 void push(int valor) {
  if (p.topo == tam) {
   printf("Pilha cheia");
  } else {
   p.dados[p.topo] = valor;
   p.topo++;
  }
 }
