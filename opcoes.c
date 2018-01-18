//
// Created by rodri on 18/01/2018.
//
#include "opcoes.h"
#include "sort.h"
#include "arquivo.h"

#define CEM 100
#define MIL 1000
#define DEZ_MIL 10000
#define CEM_MIL 100000

char arqCem[] = {"cem.txt"}, arqMil[] = {"mil.txt"}, arqDezMil[] = {"dezMil.txt"}, arqCemMil[] = {"cemMil.txt"};
int vetCem[100] = {0}, vetMil[1000] = {0}, vetDezMil[10000] = {0}, vetCemMil[100000] = {0};


void opcGeraAleatorios() {
    geraAleatorios(arqCem, CEM);
    geraAleatorios(arqMil, MIL);
    geraAleatorios(arqDezMil, DEZ_MIL);
    geraAleatorios(arqCemMil, CEM_MIL);
}

void opcBoubbleSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    bubbleSort(vetCem, CEM, arqCem);
    bubbleSort(vetCemMil, MIL, arqMil);
    bubbleSort(vetDezMil, DEZ_MIL, arqDezMil);
    bubbleSort(vetCemMil, CEM_MIL, arqCemMil);
    arqOrdenado("BoubleSort_", vetCem, CEM, arqCem);
    arqOrdenado("BoubleSort_", vetMil, MIL, arqMil);
    arqOrdenado("BoubleSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqOrdenado("BoubleSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcInsertionSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    insertionSort(vetCem, CEM, arqCem);
    insertionSort(vetCemMil, MIL, arqMil);
    insertionSort(vetDezMil, DEZ_MIL, arqDezMil);
    insertionSort(vetCemMil, CEM_MIL, arqCemMil);
    arqOrdenado("InsertionSort_", vetCem, CEM, arqCem);
    arqOrdenado("InsertionSort_", vetMil, MIL, arqMil);
    arqOrdenado("InsertionSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqOrdenado("InsertionSort_", vetCemMil, CEM_MIL, arqCemMil);
}

void opcSelectionSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    selectionSort(vetCem, CEM, arqCem);
    selectionSort(vetCemMil, MIL, arqMil);
    selectionSort(vetDezMil, DEZ_MIL, arqDezMil);
    selectionSort(vetCemMil, CEM_MIL, arqCemMil);
    arqOrdenado("SelectionSort_", vetCem, CEM, arqCem);
    arqOrdenado("SelectionSort_", vetMil, MIL, arqMil);
    arqOrdenado("SelectionSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqOrdenado("SelectionSort_", vetCemMil, CEM_MIL, arqCemMil);
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
    arqOrdenado("RadixSort_", vetCem, CEM, arqCem);
    arqOrdenado("RadixSort_", vetMil, MIL, arqMil);
    arqOrdenado("RadixSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqOrdenado("RadixSort_", vetCemMil, CEM_MIL, arqCemMil);

}

void opcQuickSort() {
    insereVetor(arqCem, vetCem, CEM);
    insereVetor(arqMil, vetMil, MIL);
    insereVetor(arqDezMil, vetDezMil, DEZ_MIL);
    insereVetor(arqCemMil, vetCemMil, CEM_MIL);
    quickSort(vetCem, 0, CEM - 1);
    quickSort(vetMil, 0, MIL - 1);
    quickSort(vetDezMil, 0, DEZ_MIL - 1);
    quickSort(vetCemMil, 0, CEM_MIL - 1);
    arqOrdenado("QuickSort_", vetCem, CEM, arqCem);
    arqOrdenado("QuickSort_", vetMil, MIL, arqMil);
    arqOrdenado("QuickSort_", vetDezMil, DEZ_MIL, arqDezMil);
    arqOrdenado("QuickSort_", vetCemMil, CEM_MIL, arqCemMil);

}