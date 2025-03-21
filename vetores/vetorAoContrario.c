#include <stdio.h>
#include <string.h>

int main() 
{
    char palavra[] = "exemplo"; // Palavra que será invertida
    int tamanho = strlen(palavra); // Obtém o tamanho da string

    printf("Palavra ao contrário: \n");
    for (int i = tamanho - 1; i >= 0; i--)
    {
        printf("%c", palavra[i]);
    }
puts("\n");

    int vetor[] = {1, 2, 3, 4, 5}; 
    int tamanho1 = 5; // Definindo manualmente o tamanho do vetor

    printf("Vetor ao contrário: \n");
    for (int i = tamanho1 - 1; i >= 0; i--)
    { 
        printf("%d ", vetor[i]);
    }

    return 0;
}
