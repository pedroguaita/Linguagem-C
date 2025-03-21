/*
 * Programa: Fatorial.cpp
 * Author: Pedro Pereira Guaita
 * Data: 26/02/2025
 * Descrição: Programa para exibir o Fatorial de um número por meio de chamadas
 *            recursivas em função.
 *            Exemplo: 5! = 5 x 4 x 3 x 2 x 1 = 120
 */
 

#include <stdio.h>

int fatorial(int);



int main()
{
    int num = 0, result;
    num = result = 0;
    
    printf("Digite umnúmero inteiro para calcular seu fatorial: ");
    scanf("%d", &num);
    
    result = fatorial(num); //Invoke
    printf("\nO fatorial de %d = %d", num, result);
    
}//fim do programa

int fatorial(int x) // x -> num (na main)
{
    if(x == 1)
        return 1;
    
    //int fat = x * fatorial(x-1);    
    //printf("%d ", fat);
    return x * fatorial(x-1);
    //return fat;
}
