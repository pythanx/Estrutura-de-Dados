//
// Created by adm-g on 15/05/2026.
/*
*Um petshop está implementando um sistema para controlar a fila de atendimento de animais. Cada animal tem:
Nome do animal (string)
Nome do dono (string)
Tipo (cachorro, gato, etc. - string)
Idade (inteiro)
A fila tem capacidade máxima de 10 animais. As operações são:
Chegada (enqueue): insere um novo animal no final da fila
Atendimento (dequeue): remove o primeiro animal da fila (o que está há mais tempo esperando)
Listar (mostrar): exibe todos os animais na fila na ordem (do primeiro ao último)
Tarefas:
Crie a struct animal com os campos necessários
Crie a struct fila usando o modelo do livro (com ini e fim) para controlar o atendimento
Declare a variável global
Implemente as funções:
void enqueue(struct animal a)
void dequeue()
void mostrar()
No main:
Insira pelo menos 3 animais
Remova 1 animal
Insira mais 2 animais
Mostre a fila final
 */
//

// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define size 10

// 1. Cria a estrutura animal
struct animal {
 char name_animal[50];
 char name_dono[50];
 char type[50];
 int age;
};

// 2. Cria a fila de atendimento de animais
struct fila {
 struct animal data[size];
 int ini, fim;
};

// 3. Cria a variavel global
struct fila atendimento;

// 4. Enqueue - Insere um novo animal no fim da fila
void enqueue(struct animal ani) {

 // fila simples -> atendimento.fim == size
 if ((atendimento.fim + 1) % size == atendimento.ini) {
  printf("\nFila cheia!\n");
 } else {
  // atendimento.data[atendimento.fim++] = ani;
  atendimento.data[atendimento.fim] = ani;
  atendimento.fim = (atendimento.fim + 1) % size;
 }
}

// 5. Dequee - Remove um animal no início da fila
void dequeue() {
 if (atendimento.ini == atendimento.fim) {
  printf("\nFilha vazia!\n");
 }
 else {
  printf("\nAnimal removido: %s\n", atendimento.data[atendimento.ini].name_animal);
  // ani = atendimento.data[ini++]
  atendimento.ini = (atendimento.ini + 1) % size;
 }
}

// Mostrar a fila de atendimento
void mostrar() {
 printf("\nFila de atendimento: \n");
 int i = atendimento.ini;
 // for(i = ini; i < atendimento.fim; i++);
 while (i != atendimento.fim) {
  printf("\nNome: %s", atendimento.data[i].name_animal);
  printf("\nDono: %s", atendimento.data[i].name_dono);
  printf("\nTipo: %s", atendimento.data[i].type);
  printf("\nIdade: %d\n", atendimento.data[i].age);
  i = (i + 1) % size;
 }
 printf("------\n");
}

int main () {
 setlocale(LC_ALL, "Portuguese");


 atendimento.ini = 0;
 atendimento.fim = 0;

 // Exemplos
 struct animal pet1;
 strcpy(pet1.name_animal, "Rex");
 strcpy(pet1.name_dono, "Carlos");
 strcpy(pet1.type, "Cachorro");
 pet1.age = 3;

 struct animal pet2;
 strcpy(pet2.name_animal, "Mimi");
 strcpy(pet2.name_dono, "Ana");
 strcpy(pet2.type, "Gato");
 pet2.age = 5;

 struct animal pet3;
 strcpy(pet3.name_animal, "Piu");
 strcpy(pet3.name_dono, "Fernanda");
 strcpy(pet3.type, "Passaro");
 pet3.age = 1;

 struct animal pet4;
 strcpy(pet4.name_animal, "Thor");
 strcpy(pet4.name_dono, "Rafael");
 strcpy(pet4.type, "Cachorro");
 pet4.age = 7;

 struct animal pet5;
 strcpy(pet5.name_animal, "Luna");
 strcpy(pet5.name_dono, "Beatriz");
 strcpy(pet5.type, "Gato");
 pet5.age = 2;

 struct animal pet6;
 strcpy(pet6.name_animal, "Nemo");
 strcpy(pet6.name_dono, "Paulo");
 strcpy(pet6.type, "Peixe");
 pet6.age = 1;

 struct animal pet7;
 strcpy(pet7.name_animal, "Mel");
 strcpy(pet7.name_dono, "Camila");
 strcpy(pet7.type, "Cachorro");
 pet7.age = 4;

 struct animal pet8;
 strcpy(pet8.name_animal, "Jade");
 strcpy(pet8.name_dono, "Luciana");
 strcpy(pet8.type, "Gato");
 pet8.age = 6;

 struct animal pet9;
 strcpy(pet9.name_animal, "Pandora");
 strcpy(pet9.name_dono, "Mariana");
 strcpy(pet9.type, "Cachorro");
 pet9.age = 10;

 struct animal pet10;
 strcpy(pet10.name_animal, "Spike");
 strcpy(pet10.name_dono, "Ricardo");
 strcpy(pet10.type, "Hamster");
 pet10.age = 1;

 struct animal pet11;
 strcpy(pet11.name_animal, "Fifi");
 strcpy(pet11.name_dono, "Ricardo");
 strcpy(pet11.type, "Passaro");
 pet11.age = 2;


 enqueue(pet1);
 enqueue(pet3);
 enqueue(pet4);
 enqueue(pet5);
 enqueue(pet6);
 enqueue(pet7);
 enqueue(pet8);
 enqueue(pet2);
 enqueue(pet9);
 enqueue(pet10);
 enqueue(pet11);

 mostrar();

 return 0;
}