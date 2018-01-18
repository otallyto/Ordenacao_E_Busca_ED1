//
// Created by rodri on 17/01/2018.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *criaArquivo(char *nome) {
    FILE *arquivo = fopen(nome, "w");
    if (arquivo == NULL) {
        printf("ERRO 404 ARQUIVO NAO ENCONTRADO!\n");
    }
    return arquivo;
}

FILE *abreArquivo(char url[]) {
    FILE *arquivo = fopen(url, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo %s!\n", url);
    }
    return arquivo;
}

void geraAleatorios(char nome[], int tam) {
    FILE *arquivo = fopen(nome, "w");

    if (arquivo == NULL) {
        printf("Erro ao gerar o arquivo %s\n", nome);
    } else {
        for (int i = 0; i < tam; i++) {
            fprintf(arquivo, "%d ", rand() % tam + 1);
        }
    }
    fclose(arquivo);
    printf("Arquivo %s gerado com sucesso!\n", nome);
}

void arqOrdenado(char funcOrd[], int vetor[], int tam, char nomeArray[]) {
    char nomeAux[25];
    strcpy(nomeAux, funcOrd);
    FILE *pont_arq = criaArquivo(strcat(nomeAux, nomeArray));
    for (int i = 0; i < tam; ++i) {
        fprintf(pont_arq, "%d ", vetor[i]);
    }
    fclose(pont_arq);
}

void insereVetor(char nome[], int vet[], int tam) {
    FILE *arquivo = abreArquivo(nome);
    for (int i = 0; i < tam; i++) {
        fscanf(arquivo, "%d", &vet[i]);
    }
    fclose(arquivo);
}

