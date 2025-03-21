/*
 * Programa: PosNeg.cpp
 * Author: Pedro Pereira Guaita
 * Data: Criado em 26/02/25
 * Descrição: Programa para ler um número inteiro positivo e exibir uma contagem
 *            regressiva.
 *                 
 *
 */
 
#include <stdio.h>

//Sessão de prototipação

void regressivo(int, int);

int main()
{
    int num = 0;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    regressivo(num, -num);
    
}//fim do programa

//funções:

void regressivo(int x, int limite)
{
    
   if(x < limite)
    return;
    
    printf("\n%d", x);
    regressivo(x - 1, limite);
}