//
// Created by rodri on 17/01/2018.
//



#ifndef ORDENACAO_BUSCA_ARQUIVO_H
#define ORDENACAO_BUSCA_ARQUIVO_H

#include <stdio.h>

FILE *abreArquivo(char url[]);

void geraAleatorios(char nome[], int tam);

void insereVetor(char nome[], int vet[], int tam);

void arqOrdenado(char funcOrd[], int vetor[], int tam, char nomeArray[]);

FILE *criaArquivo(char *nome);

#endif //ORDENACAO_BUSCA_ARQUIVO_H
