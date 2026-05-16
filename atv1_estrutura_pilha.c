//
// Created by adm-g on 14/05/2026.
/*
 *. Quando um livro é devolvido na Biblioteca do Unicesumar, o funcionário responsável pelo recebimento coloca o livro em cima de uma pilha de livros na mesa ao lado da recepção. O auxiliar de bibliotecário pega o livro do topo da pilha, verifica o seu código e leva-o para o seu devido local no acervo. No atual sistema de informação, é possível verificar se o livro está disponível ou se está emprestado. Entretanto o livro que acabou de ser devolvido ainda não se encontra na prateleira, pois existe um intervalo de tempo entre a devolução do mesmo e o momento em que ele é guardado na estante. A sugestão do departamento de TI é de criar um programa que faça o controle na pilha, assim, pode-se verificar se o livro ainda não foi guardado e qual a sua posição dentro da pilha de livros que aguardam ao lado da recepção. a) Crie uma estrutura para a pilha de livros. Lembre-se de que ela tem que ter um vetor para armazenar os dados (código, nome do livro e autor) e dois números inteiros, um para controlar o início e outro o final da pilha. b) Defina a variável que será um vetor do tipo pilha de livros. c) Faça uma função de empilhamento, lembrando-se de verificar se a pilha atingiu o tamanho máximo de livros (a mesa não aguenta muito peso). d) Crie uma função para desempilhamento de livros. Não se esqueça de que é necessário verificar se ainda existem livros para ser guardados. e) Elabore uma função que apresente na tela a lista de todos os livros que se encontram empilhados ao lado da recepção.
*/
//

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 5

// a) Cria a estrutura para a pilha de livros
//  1 - Cria um vetor para livros (código, nome do livro e autor)
struct livro {
    int codigo;
    char nome[50], autor[50];
};

//  2 - Cria a pilha de livros com topo e fim
struct pilha {
    struct livro dados[tam];
        int ini, fim;
};

// b) Define a variável do vetor do tipo pilha de livros
struct pilha livros;



// c) Cria a função push e verifica se a pilha atingiu o tam máx de livros
void push(struct livro valor) {
    if ( livros.fim == tam) {
        printf("\nPilha cheia!\n");
    } else {
        livros.dados[livros.fim] = valor;
        livros.fim++;
    }
}

// d) Cria a função pop e verifica se a pilha está cheia
void pop() {
    if (livros.ini == livros.fim) {
        printf("\nPilha vazia!");
    } else {
        printf("\nLivro removido: %s\n", livros.dados[livros.fim - 1].nome);
        livros.fim--;
    }
}

// e) Cria a função que mostra a lista de livros
void mostrar() {
    printf("\nPilha de livros: \n");
    for (int i = 0; i < livros.fim; i++) {
        printf("Codigo: %d\n", livros.dados[i].codigo);
        printf("Nome: %s\n", livros.dados[i].nome);
        printf("Autor: %s\n", livros.dados[i].autor);
        printf("---\n");
    }
}

int main() {
    setlocale (LC_ALL, "Portuguese");

    livros.ini = 0;
    livros.fim = 0;

    // Criar um livro exemplo
    struct livro l1;
    l1.codigo = 101;
    strcpy(l1.nome, "Dom Casmurro");
    strcpy(l1.autor, "Machado de Assis");
    push(l1);   // empilha

    // Criar outro livro
    struct livro l2;
    l2.codigo = 102;
    strcpy(l2.nome, "O Pequeno Príncipe");
    strcpy(l2.autor, "Saint-Exupéry");
    push(l2);   // empilha

    // Criar um livro exemplo
    struct livro l3;
    l3.codigo = 103;
    strcpy(l3.nome, "Harry Potter e a Pedra Filosofal");
    strcpy(l3.autor, "J.K.Rowling");
    push(l3);   // empilha

    // Criar outro livro
    struct livro l4;
    l4.codigo = 104;
    strcpy(l4.nome, "O Senhor dos Anéis");
    strcpy(l4.autor, "J. R. R. Tolkien");
    push(l4);   // empilha

    struct livro l5;
    l5.codigo = 105;
    strcpy(l5.nome, "Cinquenta Tons de Cinza");
    strcpy(l5.autor, "E. L. James");
    push(l5);

    struct livro l6;
    l6.codigo = 106;
    strcpy(l6.nome, "O Príncipe");
    strcpy(l6.autor, "Nicolau Maquiavel");
    pop();
    push(l6);

    mostrar();   // exibe a pilha

    return 0;


}