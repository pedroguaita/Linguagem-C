/*
	Name: insertionSort.c
	Author: Pedro Pereira Guaita
	Date: 14/05/25
	Description: implementação do método de ordenação Insertion Sort.
*/
 
#include <stdio.h>
 
//sessao de prototipação
void insertionSort(int *, int);
 
int main()
{
	int i; //apenas para rodar o for
	int comp, troca;
	int vet[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
	int tam = sizeof(vet)/sizeof(int);
	puts("Vetor desordenado:");
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
 
	insertionSort(vet, tam); //invoke
	puts("\nVetor ordenado com Insertion Sort:");
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vet[i]);
	}
}// fim do main
 
 
//função
void insertionSort(int vet[], int tam)
{
	int i, j, k, chave;
	for(i = 1; i < tam; i++)
	{
		chave = vet[i];
		j = i - 1;
		comp++;
		while(j >= 0 && vet[j] > chave)
		{
			troca++;
			comp++;
			vet[j+1] = vet[j];
			j = j - 1;	
		}
		vet[j+1] = chave;
	}
}
