//
// Created by adm-g on 14/05/2026.
/*
*Um sistema operacional simplificado usa uma pilha para gerenciar processos em execução. Cada processo tem:
ID do processo (inteiro)
Nome do processo (string)
Prioridade (inteiro de 1 a 10, onde 1 é mais urgente)
Tempo de execução estimado (inteiro em segundos)
A pilha tem capacidade máxima de 8 processos. As operações são:
Executar (push): insere um novo processo no topo da pilha
Finalizar (pop): remove o processo do topo (o que está executando no momento)
Listar (mostrar): exibe todos os processos na pilha (da base ao topo)
* Crie a struct processo com os campos necessários
Crie a struct pilha usando o modelo do livro (com ini e fim)
Declare a variável global
Implemente as funções:
void push(struct processo p)
void pop()
void mostrar()
No main:
Insira pelo menos 3 processos
Remova 1 processo (pop)
Insira mais 2 processos
Mostre a pilha final
 */
//

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

#define tam 8

// 1. Cria a struct processo
struct processo {
 int ID;
 char nome[50];
 int prioridade;
 int tempo;
};

// 2. Cria a struct pilha
struct pilha {
 struct processo p[tam];
 int ini, fim;
};

// 3. Variavel global
struct pilha processos;

// 4. Adiciona um processo no topo da pilha
void push(struct processo so) {
 if (processos.fim == tam) {
  printf("\nPilha esta cheia!\n");
 } else {
  processos.p[processos.fim] = so;
  processos.fim++;
 }
}

// 5. Remove um processo do topo
void pop() {
 if (processos.fim == processos.ini) {
  printf("\nPilha esta vazia!\n");
 }
 else {
  printf("\nProcesso encerrado: %s\n", processos.p[processos.fim-1].nome);
  processos.fim--;
 }
}

// 6. Mostrar a pilha de processos
void mostrar() {
 printf("\nPilha de processos:\n");
 for (int i = 0; i < processos.fim; i++) {
  printf("\n");
  printf("ID: %d\n", processos.p[i].ID);
  printf("Nome do processo: %s\n", processos.p[i].nome);
  printf("Prioridade: %d\n", processos.p[i].prioridade);
  printf("Tempo: %d\n", processos.p[i].tempo);
  printf("----------\n");
 }
}

// 7. Função MAIN
int main () {
 setlocale(LC_ALL, "Portuguese");

 // 8. Inicializa as variaveis
 processos.ini = 0;
 processos.fim = 0;


 // Exemplos
 struct processo p1;
 p1.ID = 00001;
 strcpy(p1.nome, "chrome.exe");
 p1.prioridade = 3;
 p1.tempo = 12309;
push(p1);

 struct processo p2;
 p2.ID = 00002;
 strcpy(p2.nome, "Spotify.exe");
 p2.prioridade = 3;
 p2.tempo = 167;
 push(p2);

 struct processo p3;
 p3.ID = 00003;
 strcpy(p3.nome, "explorer.exe");
 p3.prioridade = 4;
 p3.tempo = 332;
 push(p3);

 struct processo p4;
 p4.ID = 00004;
 strcpy(p4.nome, "WhatsApp.Root.exe");
 p4.prioridade = 6;
 p4.tempo = 167;
 push(p4);
 pop();

 struct processo p5;
 p5.ID = 00005;
 strcpy(p5.nome, "System");
 p5.prioridade = 1;
 p5.tempo = 1767;
 push(p5);

 struct processo p6;
 p6.ID = 00006;
 strcpy(p6.nome, "Tempo Ocioso do Sistema");
 p6.prioridade = 1;
 p6.tempo = 1767;
 push(p6);
 pop();

 // Exibe a pilha
 mostrar();

 return 0;

}