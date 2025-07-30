/*
	Name: mergeSort.c
	Author: Pedro Pereira Guaita
	Date: 14/05/25
	Description: implementação do método de ordenação Merge Sort.
*/
 
#include <stdio.h>
 
//sessao de prototipação
void mergeSort(int *, int, int); //prototipação da função que quebra
void merge(int *, int, int, int); //função que mescla
 
//variáveis globais
int copia = 0;
 
int main()
{
	int inicio, fim; 
	int comp, troca;
	int i;
	inicio = 0;
	int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
	int tam = sizeof(vetor)/sizeof(int);
	fim = tam - 1;
	puts("Vetor desordenado:");
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
 
	mergeSort(vetor, inicio, fim); //invoke
	puts("\nVetor ordenado com Merge Sort:");
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
}// fim do main
 
 
//Função recursiva que quebra até chegar em uma única unidade
void mergeSort(int vetor[], int inicio, int fim)
{
	if(inicio < fim)
	{
		int meio = (inicio + fim)/2;
		mergeSort(vetor, inicio, meio);  //lado esquerdo           fim -> meio
		mergeSort(vetor, meio+1, fim); //lado direito              inicio -> meio +1
		merge(vetor, inicio, meio, fim);
	}
}
 
//Função que mescla(merge) as partes unitárias
void merge(int vetor[], int inicio, int meio, int fim)
{
	int esquerda, direita, aux, tam;
	esquerda = inicio;
	direita = meio + 1;
	aux = 0;                              //índice do vetor auxiliar
	tam = fim - inicio + 1;
	int vetAux[tam];                      //[fim - inicio + 1];
	while(esquerda <= meio && direita <= fim)
	{
		if(vetor[esquerda] < vetor[direita])
		{
			copia++;
			vetAux[aux] = vetor[esquerda];
			esquerda++;
		}
		else
		{
			copia++;
			vetAux[aux] = vetor[direita];
			direita++;
		}//fim do if-else
		aux++;
	}//fim do while
	//caso ainda haja elementos na PRIMEIRA metade, copiará todo o restante para o vetor auxiliar (vetAux)
	while(esquerda <= meio)
	{
		copia++;                       //como se fosswe troca.
		vetAux[aux] = vetor[esquerda];
		aux++;
		esquerda++;
	}
	//caso ainda haja elementos na SEGUNDA metade, copiará todo o restante para o vetor auxiliar (vetAux)
	while(direita <= fim)
	{
		copia++;
		vetAux[aux] = vetor[direita];
		aux++;
		direita++;
	}
	//move os elementos de volta para o vetor original
	for(aux = inicio; aux <= fim; aux++)
	{
		copia++;
		vetor[aux] = vetAux[aux - inicio];
	}
	//free(vetAux);
}
 
