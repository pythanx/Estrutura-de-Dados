//
// Created by adm-g on 12/05/2026.
//
/*
 *Crie um programa que leia uma variável e crie dois vetores dinâmicos, um com o tamanho lido e outro com o dobro desse tamanho. Preencha esses vetores respectivamente com potências de 2 e potências de 3. a) Crie uma variável inteira e dois ponteiros do tipo inteiro. b) Pergunte ao usuário o tamanho do vetor dinâmico e leia esse valor na variável inteira. c) Aloque dinamicamente os dois vetores usando a função malloc. d) Faça um laço de repetição para preencher o primeiro vetor com potências de 2. e) Faça um segundo laço de repetição para preencher o outro vetor com potências de 3. f) Não se esqueça de usar a biblioteca math.h para poder usar o cálculo de potência (pow).
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    // a) criar uma variavel e 2 ponteiros de tipo int
    int size; //variavel
    int *vetor1, *vetor2; //dois vetores dinamicos

    // b) pergunte ao usuario o tam do vetor e leia esse valor na variavel int
    printf("Digite o tamanho desejado do vetor 1: ");
    scanf("%d", &size);

    // c) Aloca os vetores com malloc
    vetor1 = (int *) malloc(sizeof(int) * size);
    vetor2 = (int *) malloc(sizeof(int) * (2 * size));

    if (vetor1 == NULL || vetor2 == NULL) {
        printf("Erro ao alocar memoria!\n");
        return 1;
    }
    // faz um laço de repetição para preencher o vetor 1 com potências de 2
    printf("\nVetor principal (potencias de 2):\n");
    for (int i = 0; i < size; i++) {
        vetor1[i] = pow(2,i);
        printf("\nPosicao %d: %d", i, vetor1[i]);
    }
    printf("\nVetor 2 (potencias de 3):\n");
    // faz um laço de repetição para preencher o vetor 2 com potencias de 3
    for (int j = 0; j < 2*size; j++) {
        vetor2[j] = pow(3,j);
        printf("\nPosicao %d: %d", j, vetor2[j]);
    }
    free(vetor1);
    free(vetor2);
    return 0;

}


