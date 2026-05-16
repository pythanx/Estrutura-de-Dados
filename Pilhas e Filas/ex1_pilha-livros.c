/**
* @file atv1_estrutura_pilha.c
 * @brief Sistema de controle para a pilha de livros devolvidos na recepção da biblioteca.
 *
 * Atividades realizadas:
 * a) Crie uma estrutura para a pilha de livros contendo dados (código, nome e autor)
 *    e dois números inteiros para controle de início e final.
 * b) Defina a variável que será um vetor do tipo pilha de livros.
 * c) Crie uma função de empilhamento (push), validando o limite máximo de armazenamento.
 * d) Crie uma função de desempilhamento (pop), validando se a estrutura contém elementos.
 * e) Elabore uma função para exibir em tela todos os livros atualmente empilhados.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define size 4

// Cria uma estrutura para livros
struct livros {
 int code;
 char name[50];
 char author[50];
};

// Cria uma pilha de livros
struct pilha_livros {
 struct livros data[size];
 int ini, fim;
};

//Cria a variavel que sera um vetor do tipo pilha de livros
struct pilha_livros livro;

// Cria a função push
void push(struct livros l) {   // recebe um livro
 //verifica se a pilha está cheia
 if (livro.fim == size) {
  printf("\nPilha de livros cheia!\n");
 }
 else {
  livro.data[livro.fim] = l;
  livro.fim++;
 }
}

// Cria a função pop
void pop() {
 if ((livro.fim == livro.ini)) {
  printf("\nPilha de livros vazia!\n");
 }
 else {
  printf("\nLivro Removido: %s\n", livro.data[livro.fim-1].name);
  livro.fim--;
 }
}

void mostrar() {
 printf("\n------Pilha de livros (base -> topo): -------\n");
 for (int i = 0; i < livro.fim; i++) {
  printf("Codigo: %d\n", livro.data[i].code);
  printf("Name: %s\n", livro.data[i].name);
  printf("Author: %s\n", livro.data[i].author);
  printf("--------------------------------\n");
 }
}

int main() {
 setlocale(LC_ALL, "Portuguese");

 livro.fim = 0;
 livro.ini = 0;

 // Cria um livro
 struct livros l1;
  l1.code = 101;
  strcpy(l1.name, "Harry Potter e a Pedra Filosofal");
  strcpy(l1.author, "J.K. Rowling");

 struct livros l2;
 l2.code = 102;
 strcpy(l2.name, "Cinquenta Tons de Cinza");
 strcpy(l2.author, "E.L James");

 struct livros l3;
 l3.code = 103;
 strcpy(l3.name, "O Senhor dos Aneis");
 strcpy(l3.author, "J.R.R. Tolkien");

 struct livros l4;
 l4.code = 104;
 strcpy(l4.name, "O Pequeno Principe");
 strcpy(l4.author, "Antoine de Saint-Exupery");

 struct livros l5;
 l5.code = 105;
 strcpy(l5.name, "As Cronicas de Gelo e Fogo");
 strcpy(l5.author, "George R.R. Martin");

 struct livros l6;
 l6.code = 106;
 strcpy(l6.name, "O Principe");
 strcpy(l6.author, "Nicolau Maquiavel");

 push(l1);
 push(l2);
 pop();
 push(l3);
 push(l4);
 push(l5);
 pop();
 push(l6);
 mostrar();

 return 0;
}