//
// Created by rodri on 18/01/2018.
//
#include <stdlib.h>
#include "opcoes.h"
#include "sort.h"
#include "arquivo.h"

#define CEM 100
#define MIL 1000
#define DEZ_MIL 10000
#define CEM_MIL 100000

char arqCem[] = {"cem.txt"}, arqMil[] = {"mil.txt"}, arqDezMil[] = {"dezMil.txt"}, arqCemMil[] = {"cemMil.txt"};
int vetCem[100] = {0}, vetMil[1000] = {0}, vetDezMil[10000] = {0}, vetCemMil[100000] = {0};

void menuBusca() {
    printf("|-------------------------------|\n"
                   "|              BUSCA            |\n"
                   "|1 - Buscar no vetor de CEM     |\n"
                   "|2 - Buscar no vetor de MIL     |\n"
                   "|3 - Buscar no vetor de DEZ MIL |\n"
                   "|4 - Buscar no vetor de CEM MIL |\n"
                   "|0 - SAIR                       |\n"
                   "|-------------------------------|\n"
                   "Digite a opcao desejada: ");
}

void opcGeraAleatorios() {
    geraArqAleatorio(arqCem, CEM);
    geraArqAleatorio(arqMil, MIL);
    geraArqAleatorio(arqDezMil, DEZ_MIL);
    geraArqAleatorio(arqCemMil, CEM_MIL);
}

void opcBoubbleSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    bubbleSort(vetCem, CEM, arqCem);
    bubbleSort(vetMil, MIL, arqMil);
    bubbleSort(vetDezMil, DEZ_MIL, arqDezMil);
    bubbleSort(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("BoubleSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("BoubleSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("BoubleSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("BoubleSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcInsertionSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    insertionSort(vetCem, CEM, arqCem);
    insertionSort(vetMil, MIL, arqMil);
    insertionSort(vetDezMil, DEZ_MIL, arqDezMil);
    insertionSort(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("InsertionSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("InsertionSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("InsertionSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("InsertionSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcSelectionSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    selectionSort(vetCem, CEM, arqCem);
    selectionSort(vetMil, MIL, arqMil);
    selectionSort(vetDezMil, DEZ_MIL, arqDezMil);
    selectionSort(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("SelectionSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("SelectionSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("SelectionSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("SelectionSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcRadixSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    radixSort(vetCem, CEM, arqCem);
    radixSort(vetMil, MIL, arqMil);
    radixSort(vetDezMil, DEZ_MIL, arqDezMil);
    radixSort(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("RadixSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("RadixSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("RadixSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("RadixSort_", vetCemMil, CEM_MIL, arqCemMil);

}

void opcQuickSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    quickSortComp(vetCem, CEM, arqCem);
    quickSortComp(vetMil, MIL, arqMil);
    quickSortComp(vetDezMil, DEZ_MIL, arqDezMil);
    quickSortComp(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("QuickSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("QuickSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("QuickSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("QuickSort_", vetCemMil, CEM_MIL, arqCemMil);

}

void opcMergeSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    mergeSortComp(vetCem, CEM, arqCem);
    mergeSortComp(vetMil, MIL, arqMil);
    mergeSortComp(vetDezMil, DEZ_MIL, arqDezMil);
    mergeSortComp(vetCemMil, CEM_MIL, arqCemMil);
    arqVetOrdenado("MergeSort_", vetCem, CEM, arqCem);
    arqVetOrdenado("MergeSort_", vetMil, MIL, arqMil);
    arqVetOrdenado("MergeSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqVetOrdenado("MergeSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcBuscaBinaria() {
    int chave, opc, flag = 0;
    while (flag == 0) {
        printf("Digite o numero que deseja buscar: ");
        scanf("%d", &chave);
        menuBusca();
        scanf("%d", &opc);
        system("cls");
        switch (opc) {
            case 1:
                insereVetor(arqCem, vetCem, CEM);
                quickSortComp(vetCem, CEM, arqCem);
                buscaBinaria(vetCem, chave, CEM);
                break;
            case 2:
                insereVetor(arqMil, vetMil, MIL);
                quickSortComp(vetMil, MIL, arqMil);
                buscaBinaria(vetMil, chave, MIL);
                break;
            case 3:
                insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
                quickSortComp(vetDezMil, DEZ_MIL, arqDezMil);
                buscaBinaria(vetDezMil, chave, DEZ_MIL);
                break;
            case 4:
                insereVetor(arqCemMil, vetCemMil, CEM_MIL);
                quickSortComp(vetCemMil, CEM_MIL, arqCemMil);
                buscaBinaria(vetCemMil, chave, CEM_MIL);
                break;
            case 0:
                flag = 1;
                break;
            default:
                printf("OPCAO INVALIDA!\n");
                break;
        }
    }
}

void opcBuscaSequecial(){
    int chave, opc, flag = 0;
    while (flag == 0) {
        printf("Digite o numero que deseja buscar: ");
        scanf("%d", &chave);
        menuBusca();
        scanf("%d", &opc);
        system("cls");
        switch (opc) {
            case 1:
                insereVetor(arqCem, vetCem, CEM);
                buscaSequencial(vetCem, chave, CEM);
                break;
            case 2:
                insereVetor(arqMil, vetMil, MIL);
                buscaSequencial(vetMil, chave, MIL);
                break;
            case 3:
                insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
                buscaSequencial(vetDezMil, chave, DEZ_MIL);
                break;
            case 4:
                insereVetor(arqCemMil, vetCemMil, CEM_MIL);
                buscaSequencial(vetCemMil, chave, CEM_MIL);
                break;
            case 0:
                flag = 1;
                break;
            default:
                printf("OPCAO INVALIDA!\n");
                break;
        }
    }
}
