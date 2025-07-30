/*
	Name: SelectionSort.c
	Author: Pedro Pereira Guaita
	Date: 07/05/25 
	Description: implementação do algoritmo do método de ordenaçõa Selection Sort
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int i, j, aux, menor, chave;
	int comp, troca;
	
	int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
	//int vetor[] = {93, 72, 54, 45, 35, 28,21, 17, 12, 3};   //ordem decrescente  (pior caso)
	//int vetor[] = {3, 12, 17, 21, 28, 35, 45, 54, 72, 93};  //ordem crescente (melhor caso)
	
	int tam = sizeof(vetor)/sizeof(int);
	i = 0;

	while(i < tam)
	{
		menor = i;            //recebe o endereço de i e nao o valor de i. recebe o indice do elemento
		j = i + 1;
		
		
		do
		{
			comp++;
			if(vetor[j] < vetor[menor])
				menor = j;               //guardando o endereço do menor elemento
			j++;
				
		}while(j < tam);
		
		if(i != menor)
		{
			aux = vetor[i];
			vetor[i] = vetor[menor];
			vetor[menor] = aux;
			troca++;
		}
		
		i++;
		
	}//fim do while
	
	puts("Vetor ordenado pelo Selection sort:\n");
	
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
	
	printf("\n\n*** Comparacoes: %d ***", comp);
	printf("\n*** Trocas: %d", troca);
}//fim do programa



