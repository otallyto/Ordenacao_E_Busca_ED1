#include <stdio.h>
#include <stdlib.h>
#include "opcoes.h"


int main() {
    int opcao, flag = 0;

    while (flag != 1) {
        system("color 02");
        printf("|-------------------------------|\n"
                       "|       TRABALHO DE ORDENACAO   |\n"
                       "|1 - Gerar Numeros Aleatorios   |\n"
                       "|2 - Selection Sort             |\n"
                       "|3 - Insertion Sort             |\n"
                       "|4 - Boubble Sort               |\n"
                       "|5 - Radix Sort                 |\n"
                       "|6 - Quick Sort                 |\n"
                       "|7 - Merge Sort                 |\n"
                       "|8 - Busca Binaria              |\n"
                       "|9 - Busca Sequencial           |\n"
                       "|0 - Sair                       |\n"
                       "|-------------------------------|\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);
        system("cls");
        switch (opcao) {
            case 1:
                opcGeraAleatorios();
                break;
            case 2:
                opcSelectionSort();
                break;
            case 3:
                opcInsertionSort();
                break;
            case 4:
                opcBoubbleSort();
                break;
            case 5:
                opcRadixSort();
                break;
            case 6:
                opcQuickSort();
                break;
            case 7:
                opcMergeSort();
                break;
            case 8:
                opcBuscaBinaria();
                break;
            case 9:
                opcBuscaSequecial();
                break;
            case 0:
                flag = 1;
                break;
            default:
                printf("Opcao Invalida!!!\n");
                break;
        }

    }
//     for (int i = 0; i < CEM; i++) {
//       printf("Posicao %d Conteudo %d\n",i+1,vetCem[i] );
//     }
    return 0;
}