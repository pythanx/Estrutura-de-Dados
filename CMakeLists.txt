cmake_minimum_required(VERSION 4.2)
project(Estrutura_de_Dados C)

set(CMAKE_C_STANDARD 11)

add_executable(new_target "Ponteiros e Alocacao Dinamica/ex_01-ponteiro-alocacao.c"
        "Ponteiros e Alocacao Dinamica/ex_02-semaforo.c"
        "Ponteiros e Alocacao Dinamica/ex_05-vetor-dinamico.c")
