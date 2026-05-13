cmake_minimum_required(VERSION 4.2)
project(Estrutura_de_Dados C)

set(CMAKE_C_STANDARD 11)

add_executable(ex1_alocacao_inteiro ex1_alocacao_inteiro.c
        ex5_vetor_dinamico.c
        ex7.struct_notas.c
        quest4_pilha.c
        quest9_pilha.c)
add_executable(ex2_semaforo ex2_semaforo.c
        ex5_vetor_dinamico.c)
