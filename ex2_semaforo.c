// Created by adm-g on 12/05/2026.
/*
 *2. Uma famosa fábrica de semáforos está testando um novo protótipo, menor, mais barato e eficiente. Foi solicitado à equipe de TI um programa em linguagem C para fazer o teste do novo hardware. O semáforo tem três objetos, cada um contém um atributo cor e outro id. Devido às limitações de memória e processamento, é necessária a criação de um ponteiro que vai percorrendo a memória e imprimindo o valor na tela. a) Crie uma estrutura que tenha dois atributos: cor (cadeia de caracteres) e id (inteiro). b) Crie três variáveis com o tipo definido no item a. c) Crie um ponteiro do mesmo tipo. d) Inicialize as estruturas da seguinte forma: • cor vermelha, id 1. • cor amarela, id 2. • cor verde, id 3. e) Inicialize o ponteiro apontando para a primeira variável criada. f) Por meio de operações aritméticas com ponteiros, percorra a memória e imprima o valor de cada uma das variáveis criadas nesse programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// a) criar uma estrutura que tenha 2 atributos: cor (char) e id (int)
struct semaforo {
    char cor[20]; //contar a maior string (vermelho: 8 letras + \0 = 9. Poderia ser cor[10]
    int id;
};


int main() {
    setlocale(LC_ALL, "Portuguese");
    // a) criar uma estrutura que tenha o atributo cor (char) e id (int)

    // b) criar 3 variáveis com o tipo definido no item a.
    struct semaforo s[3];


    // c) crie um ponteiro do mesmo tipo
    struct semaforo *ptr;

    // d) Inicialize as estruturas: cor vermelha, id 1; cor amarela, id 2; cor verde, id 3.
    strcpy(s[0].cor,"vermelha");
    strcpy(s[1].cor,"amarela");
    strcpy(s[2].cor,"verde");
    s[0].id = 1;
    s[1].id = 2;
    s[2].id = 3;

    // e) Inicialize o ponteiro apontado para a primeira váriavel criada
    ptr = s;

    // f) Percorra a memória e imprima o valor de cada variável com operações de ponteiros
    for (int i=0; i<3; i++) {
        printf("cor: %s, id: %d\n", ptr->cor, ptr->id);
        ptr++;
    }
    return 0;
}