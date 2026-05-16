/**
* @file ex3_vetores_dinamicos.c
 * @brief Criação e manipulação de vetores dinâmicos utilizando potências matemáticas e alocação.
 *
 * Atividades realizadas:
 * a) Crie uma variável inteira e dois ponteiros do tipo inteiro.
 * b) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira.
 * c) Aloque dinamicamente os dois vetores usando a função malloc (um com tamanho N e outro com 2N).
 * d) Faça um laço de repetição para preencher o primeiro vetor com potências de 2.
 * e) Faça um segundo laço de repetição para preencher o outro vetor com potências de 3.
 * f) Utilize a biblioteca math.h para realizar o cálculo de potência através da função pow().
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 16/05/2026
 * @see https://github.com/pythanx/Estrutura-de-Dados
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main () {
 setlocale(LC_ALL, "Portuguese");

 // Cria uma variável int e dois ponteiros int
 int size;
 int *vet1, *vet2;

 printf("\nInsira o valor do vetor 1: ");
 scanf("%d", &size);

 // Aloca os dois vetores com malloc
 vet1 = (int *) malloc(size * sizeof(int));
 vet2 = (int *) malloc((2 * size) * sizeof(int));

 // Preenche o vetor 1 com potências de 2
 printf("\nVetor 1 com potencias de 2:\n");
 for (int i = 0; i < size; i++) {
  vet1[i] = pow(2,i);
  printf("Posicao %d: %d\n", i,  vet1[i]);
 }
 printf("\nVetor 2 com potencias de 3:\n");
 for (int i = 0; i < (2* size); i++) {
  vet2[i] = pow(3,i);
  printf("Posicao %d: %d\n", i,  vet2[i]);
 }
 free(vet1);
 free(vet2);

 return 0;
}