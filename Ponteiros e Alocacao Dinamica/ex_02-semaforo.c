/**
* @file ex2_semaforo.c
 * @brief Programa de teste para protótipo de hardware de semáforo utilizando aritmética de ponteiros.
 *
 * Atividades realizadas:
 * a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id (inteiro).
 * b) Crie três variáveis com o tipo definido no item a.
 * c) Crie um ponteiro do mesmo tipo.
 * d) Inicialize as estruturas da seguinte forma:
 *    - cor vermelha, id 1.
 *    - cor amarela, id 2.
 *    - cor verde, id 3.
 * e) Inicialize o ponteiro apontando para a primeira variável criada.
 * f) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima o valor de cada uma das variáveis.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com/pythanx/Estrutura-de-Dados
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// Cria e estrutura do semaforo
struct semaforo {
 char cor[30];
 int id;
};

// Cria as 3 variaveis
struct semaforo s[3];

// Cria um ponteiro do mesmo tipo
struct semaforo *ptr;

int main() {
 setlocale(LC_ALL, "Portugues");

 // Inicialize as estruturas: cor vermelha, id 1...
 strcpy(s[0].cor, "vermelha");
 s[0].id = 1;
 strcpy(s[1].cor, "amarela");
 s[1].id = 2;
 strcpy(s[2].cor, "verde");
 s[2].id = 3;

 // Inicialize o ptr apontando para a primeira variavel
 ptr = s; //ou ptr = &s[0];

 //Percorra a memória e imprima o valor das variavéis
 printf("\nSemaforo: \n");
 for (int i = 0; i < 3; i++) {
  printf("\n * cor: %s, id: %d", ptr->cor, ptr->id);
  ptr++;
 }
 return 0;
}


