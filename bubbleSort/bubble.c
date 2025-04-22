#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int vetor[], int tam, int *comp, int *troca);

int main() {
    int vetor[251];
    int tam = sizeof(vetor)/sizeof(int);
    int i, comp = 0, troca = 0;

    srand(time(NULL));
    for(i = 0; i < tam; i++) {
        vetor[i] = rand() % 1000; // números entre 0 e 999
    }

    bubbleSort(vetor, tam, &comp, &troca);

    printf("\n\nVetor ordenado:\n");
    for(i = 0; i < tam; i++) {
        printf("%d|", vetor[i]);
    }

    printf("\n\n*** Comparações: %d ***", comp);
    printf("\n*** Trocas: %d ***\n", troca);

    return 0;
}

void bubbleSort(int vetor[], int tam, int *comp, int *troca) {
    int i, aux;
    while(tam > 0) {
        for(i = 0; i < tam - 1; i++) {
            (*comp)++;
            if(vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                (*troca)++;
            }
        }
        tam--;
    }
}

