//
// Created by rodri on 17/01/2018.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

clock_t tInicio, tFim;
long long int trocaRecusirvo, compRecursivo;
long long int troca, comp;

void bubbleSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int k, j, aux;
    troca = comp = 0;
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
    printf("Boubble Sort: %s\n"
                   "Trocas: %lld\n"
                   "Comparacoes: %lld\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, troca, comp, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));
}

void insertionSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int k, j, aux;
    troca = comp = 0;
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
    printf("Insertion Sort: %s\n"
                   "Trocas: %lld\n"
                   "Comparacoes: %lld\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, troca, comp, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));
}

void selectionSort(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    int aux;
    troca = comp = 0;
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
    printf("Selection Sort: %s\n"
                   "Trocas: %lld\n"
                   "Comparacoes: %lld\n"
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
    printf("Radix Sort: %s\n"
                   "Trocas: Indisponivel\n"
                   "Comparacoes: Indisponivel\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, ((double) (tFim - tInicio) / CLOCKS_PER_SEC));

}

void quickSort(int vetor[], int inicio, int fim) {
    int i, j, meio, aux;
    i = inicio;
    j = fim;
    meio = vetor[(inicio + fim) / 2];

    do {
        while (vetor[i] < meio) {
            i++;
            compRecursivo++;
        }

        while (vetor[j] > meio) {
            j--;
            compRecursivo++;
        }

        if (i <= j) {
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
            i++;
            j--;
            trocaRecusirvo++;
        }
    } while (i <= j);

    if (inicio < j)
        quickSort(vetor, inicio, j);
    if (i < fim)
        quickSort(vetor, i, fim);
}


void quickSortComp(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    trocaRecusirvo = compRecursivo = 0;
    quickSort(vetor, 0, tam - 1);
    tFim = clock();
    printf("Quick Sort: %s\n"
                   "Trocas: %lld\n"
                   "Comparacoes: %lld\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, trocaRecusirvo, compRecursivo,
           ((double) (tFim - tInicio) / CLOCKS_PER_SEC));

}

void mergeSort(int vetor[], int inicio, int fim) {
    int i, j, k, meio, *vetorTemp;
    if (inicio == fim) return;

    // ordenacao recursiva das duas metades
    meio = (inicio + fim) / 2;
    mergeSort(vetor, inicio, meio);
    mergeSort(vetor, meio + 1, fim);

    // intercalacao no vetor temporario t
    i = inicio;
    j = meio + 1;
    k = 0;
    vetorTemp = (int *) malloc(sizeof(int) * (fim - inicio + 1));

    while (i < meio + 1 || j < fim + 1) {
        if (i == meio + 1) { // i passou do final da primeira metade, pegar v[j]
            vetorTemp[k] = vetor[j];
            j++;
            k++;
        } else {
            if (j == fim + 1) {
                // j passou do final da segunda metade, pegar v[i]
                vetorTemp[k] = vetor[i];
                i++;
                k++;
            } else {
                if (vetor[i] < vetor[j]) {
                    vetorTemp[k] = vetor[i];
                    i++;
                    k++;
                } else {
                    vetorTemp[k] = vetor[j];
                    j++;
                    k++;
                }
            }
            compRecursivo++;
        }

    }
    // copia vetor intercalado para o vetor original
    for (i = inicio; i <= fim; i++) {
        vetor[i] = vetorTemp[i - inicio];
        trocaRecusirvo++;
    }
    free(vetorTemp);
}

void mergeSortComp(int vetor[], int tam, char nomeArq[]) {
    tInicio = clock();
    trocaRecusirvo = compRecursivo = 0;
    mergeSort(vetor, 0, tam - 1);
    tFim = clock();
    printf("Merge Sort: %s\n"
                   "Trocas: %lld\n"
                   "Comparacoes: %lld\n"
                   "Tempo de Execucao:  %lf\n\n", nomeArq, trocaRecusirvo, compRecursivo,
           ((double) (tFim - tInicio) / CLOCKS_PER_SEC));

}

void buscaBinaria(int vetor[], int chave, int tam) {
    int inf = 0;     // limite inferior (o primeiro índice de vetor em C é zero          )
    int sup = tam - 1; // limite superior (termina em um número a menos. 0 a 9 são 10 números)
    int meio;
    int flag = 0;
    while (inf <= sup) {
        meio = (inf + sup) / 2;
        if (chave == vetor[meio]) {
            printf("Elemento %d encontrado na posicao %d\n", vetor[meio], meio);
            flag++;
            break;
        }
        if (chave < vetor[meio])
            sup = meio - 1;
        else
            inf = meio + 1;
    }
    if (flag == 0) {
        printf("Elemento %d nao encontrado!\n", chave);   // não encontrado
    }

}

void buscaSequencial(int vetor[], char chave, int tam) {
    int i, flag = 0;
    for (i = 0; i < tam; i++) {
        if (vetor[i] == chave) {
            printf("Elemento %d encontrado na posicao %d\n", vetor[i], i);
            flag++;
            break;
        }
    }
    if (flag == 0) {
        printf("Elemento %d nao encontrado!\n", chave);   // não encontrado
    }


}