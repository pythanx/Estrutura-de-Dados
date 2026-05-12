// Created by adm-g on 11/05/2026.
/*1. Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e alocação dinâmica na memória. a) Defina um ponteiro do tipo inteiro. b) Faça alocação dinâmica para o ponteiro recém-criado. c) Preencha a memória com o valor 42. d) Imprima o endereço do ponteiro na memória e o valor contido nele.
 **/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    // a) defina um ponteiro do tipo inteiro
    int *ptr;

    // b) faça alocação dinâmica
    ptr = (int *)malloc(sizeof(int));

    if (ptr == NULL) {
        printf("Erro! Memória insuficiente.\n");
    }
    // c) preencha a memória com 42
    else {
        *ptr = 42;

        // d) imprimir o endereço do ponteiro e seu valor contido
        printf("Endereço: %p\n", ptr);
        printf("Valor: %d\n", *ptr);
    }
    // libera a memória
    free(ptr);
    return 0;
}
