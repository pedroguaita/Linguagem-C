/*
	Name: Função
	Author: Pedro Pereira Guaita
	Date: 24/03/25 
	Description: Aprender a usar uma função
*/


#include <stdio.h>

//prototipação

float maiorNumero(float, float);


int main()
{
	float a, b, maior;
	
	printf("Insira um valor:\n");
	scanf("%f", &a);
	
	printf("Insira mais um valor:\n");
	scanf("%f", &b);
	
	maior = maiorNumero(a, b); //invoke
	
	printf("Maior numero: %.1f\n", maior);
	
} //fim do programa


//função: 

float maiorNumero(float num1, float num2)
{
	if(num1 > num2)
        return num1;
        
	else if(num1 < num2)
		return	num2;
	
	else
		printf("Os numeros sao iguais\n");
		return num1;		   
}
