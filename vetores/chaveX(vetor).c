#include <stdio.h>
#include <stdbool.h>

int main() {
    float X, vet[10];
    int i, p;
    bool achou;

    // Entrada dos dados no vetor
    for(i = 0; i < 10; i++) {
        printf("Insira o dado da posição %d:\n", i + 1);
        scanf("%f", &vet[i]);
    }

    // Entrada da chave de busca
    printf("Insira a chave de busca:\n");
    scanf("%f", &X);

    achou = false;  // Inicializa a variável de controle
    i = 0;

    // Busca linear
    while((i < 10) && !achou) { // Condição simplificada (achou == false)
        if(vet[i] == X) {
            achou = true;
            p = i;  // Armazena a posição onde o elemento foi encontrado
        }
        i++;
    }

    // Resultado da busca
    if(!achou) {
        printf("Chave não encontrada.\n");
    } else {
        printf("Chave encontrada na posição %d.\n", p + 1); // Exibe a posição de forma amigável (índice baseado em 1)
    }

    return 0;
}
