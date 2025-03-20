/*
	Name: Soma de números inteiros
	Author: Pedro Pereira Guaita
	Date: 19/03/25 
	Description: Soma entre os números de 1 a 10 usando laço de repetição
*/

#include <stdio.h>

int main()
{
    int i, soma = 0;
    
    for(i = 0; i < 11; i++)
    {
        soma += i;
    }
    
    printf("A soma dos múmero entre 1 e 10 é: %d", soma);
}

