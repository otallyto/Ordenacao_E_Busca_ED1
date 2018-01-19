//
// Created by rodri on 17/01/2018.
//

#ifndef ORDENACAO_BUSCA_SORT_H
#define ORDENACAO_BUSCA_SORT_H

void bubbleSort(int vetor[], int tam, char nomeArq[]);

void insertionSort(int vetor[], int tam, char nomeArq[]);

void selectionSort(int vetor[], int tam, char nomeArq[]);

void radixSort(int vetor[], int tam, char nomeArq[]);

void quickSort(int vetor[], int inicio, int fim);

void quickSortComp(int vetor[], int tam, char nomeArq[]);

void mergeSort(int vetor[], int inicio, int fim);

void mergeSortComp(int vetor[], int tam, char nomeArq[]);

void buscaBinaria(int vetor[], int chave, int tam);

void buscaSequencial(int vetor[], char chave, int tam);

#endif //ORDENACAO_BUSCA_SORT_H
