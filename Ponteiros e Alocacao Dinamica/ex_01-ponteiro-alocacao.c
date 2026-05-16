/**
* @file ex_01-ponteiro-alocacao.c
 * @brief Faça um pequeno programa para testar seus conhecimentos sobre ponteiros e alocação dinâmica na memória.
 *
 * Atividades realizadas:
 * a) Defina um ponteiro do tipo inteiro.
 * b) Faça alocação dinâmica para o ponteiro recém-criado.
 * c) Preencha a memória com o valor 42.
 * d) Imprima o endereço do ponteiro na memória e o valor contido nele.
 *
 * @author Giselle Oliveira (GitHub: @pythanx)
 * @date 15/05/2026
 * @see https://github.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
 setlocale(LC_ALL, "Portuguese");

 // Define um ponteiro do tipo int
 int *ptr;

 // Cria alocacao dinamica para ptr
 ptr = (int *) malloc (sizeof(int));

 // Preenche a memória com 42.
 *ptr = 42;

 // Imprime o endereço do ponteiro e o valor contido nele
printf("\nEndereco: %p \nValor: %d\n\n", ptr, *ptr);

 free(ptr);
}

