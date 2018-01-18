//
// Created by rodri on 17/01/2018.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

clock_t tInicio, tFim;

void bubbleSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int k, j, aux;
    unsigned long long int troca = 0, comp = 0;
    for (k = tam - 1; k > 0; k--) {
        for (j = 0; j < k; j++) {
            comp++;
            if (vetor[j] > vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
                troca++;
            }
        }
    }
    tFim = clock();
    printf("BoubbleSort: %s\n"
                   "Trocas: %llu\n"
                   "Comparacoes: %llu\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, troca, comp, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));
}

void insertionSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int k, j, aux;
    unsigned long long int troca = 0, comp = 0;
    for (k = 1; k <= tam - 1; k++) {
        aux = vetor[k];
        j = k - 1;
        while (j >= 0 && aux < vetor[j]) {
            vetor[j + 1] = vetor[j];
            j--;
            troca++;
        }
        vetor[j + 1] = aux;
        comp++;
    }
    tFim = clock();
    printf("InsertionSort: %s\n"
                   "Trocas: %llu\n"
                   "Comparacoes: %llu\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, troca, comp, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));
}

void selectionSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int aux;
    long long int troca = 0, comp = 0;
    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (vetor[i] > vetor[j]) {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
                troca++;
            }
        }
        comp++;
    }
    tFim = clock();
    printf("SelectionSort: %s\n"
                   "Trocas: %llu\n"
                   "Comparacoes: %llu\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, troca, comp, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));
}

void radixSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int i;
    int *b;
    int maior = vetor[0];
    int exp = 1;

    b = (int *) calloc(tam, sizeof(int));

    for (i = 0; i < tam; i++) {
        if (vetor[i] > maior)
            maior = vetor[i];
    }

    while (maior / exp > 0) {
        int bucket[10] = {0};
        for (i = 0; i < tam; i++)
            bucket[(vetor[i] / exp) % 10]++;
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for (i = tam - 1; i >= 0; i--)
            b[--bucket[(vetor[i] / exp) % 10]] = vetor[i];
        for (i = 0; i < tam; i++)
            vetor[i] = b[i];
        exp *= 10;
    }
    free(b);
    tFim = clock();
    printf("RadixSort: %s\n"
                   "Trocas: Indisponivel\n"
                   "Comparacoes: Indisponivel\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));

}

void quickSort(int *vetor, int inicio, int fim) {
    int i, j, meio, aux;

    i = inicio;
    j = fim;
    meio = vetor[(inicio + fim) / 2];

    do {
        while (vetor[i] < meio)
            i++;
        while (vetor[j] > meio)
            j--;
        if (i <= j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
        }
    } while (i <= j);

    if (inicio < j)
        quickSort(vetor, inicio, j);
    if (i < fim)
        quickSort(vetor, i, fim);
}

