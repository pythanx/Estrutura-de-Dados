//
// Created by adm-g on 13/05/2026.
/*Pilha é uma das estruturas mais simples e mais versáteis dentre as utilizadas na computação. Antes de entrar nas nuances técnicas sobre pilhas, vamos abstrair o seu conceito para uma situação real. As funções de desempilhar e de empilhar são comumente chamadas de pop() e push(), respectivamente. Considere a seguinte pilha de números inteiros:

Base -> 5, 2, 15, 3, 9, 8, 4, 12, 10, 7, 1, 11 <- Topo

Sabendo que, inicialmente, o elemento 11 está no topo, execute a seguinte sequência de operações sobre a respectiva pilha:

pop(); pop(); pop(); push(6); push(13); pop(); push(14); pop(); pop();

Assinale o elemento que será o próximo a ser removido se for chamada a função pop() mais uma vez.
*/

// Bibliotecas
#include <stdio.h>
#include <locale.h>

// Constantes
#define tam 20

// Estrutura da pilha
struct pilha {
    int topo;
    int dados[tam];
};

// Variáveis
struct pilha t;

//Prototipos
void pop();
void push(int val);


int main() {
    setlocale (LC_ALL, "portuguese");

    t.topo = 0;
    t.dados[0] = 5;
    t.dados[1] = 2;
    t.dados[2] = 15;
    t.dados[3] = 3;
    t.dados[4] = 9;
    t.dados[5] = 8;
    t.dados[6] = 4;
    t.dados[7] = 12;
    t.dados[8] = 10;
    t.dados[9] = 7;
    t.dados[10] = 1;
    t.dados[11] = 11;

    t.topo = 12;

    // Executar
    pop();
    pop();
    pop();
    push(6);
    push(13);
    pop();
    push(14);
    pop();
    pop();
    pop();




    // Mostrar resultado da pilha
    printf("Pilha final: \n");
    for (int i = 0; i < t.topo; i++) {
        printf("%d ", t.dados[i]);
    }
    return 0;
}
// Remove um elemento
void pop() {
    if (t.topo == 0) {
        printf("Pilha vazia");
    } else {
        t.topo--;
    }
}

// Add um elemento
void push(int val) {
    if (t.topo == tam) {
        printf("Pilha cheia");
    }
    else {
        t.dados[t.topo] = val;
        t.topo++;
    }
}