/*
	Name: QuickSort.cpp
	Author: Matheus Cavalheiro de Camargo
	Date: 28/05/25 11:17
	Description: Quicksort
*/
#include <stdio.h>
 
void quickSort(int *, int, int);
int partition(int *, int, int);
main()
{
	int i = 0;
	int vet [] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
	//int vet[] = {93, 72, 54, 45, 35, 28, 21, 27, 17, 12, 3}; //pior caso
	//int vet[] = {3, 12, 17, 21, 28, 35, 45, 54, 72, 93}; //melhor caso
	int tam = sizeof(vet)/sizeof(int);
	puts("Vetor desordenado:");
	for( i = 0; i < tam; i++)
		printf("%d|", vet[i]);

	quickSort(vet,0,tam-1);
	puts("\nVetor ordenado com o Quick Sort:");
	for( i = 0; i < tam; i++)
		printf("%d|", vet[i]);
}//fim do main
 
//funcoa quicksort para a esquerda e direita das particoes
void quickSort(int *vet, int inicio, int fim)
{
	int pivot = 0;
	if(fim > inicio)
	{
		pivot = partition(vet,inicio,fim);
		quickSort(vet,inicio,pivot-1);//quicksort para o lado esquerdo
		quickSort(vet, pivot+1, fim);//quicksort para o lado direito
	}
}
//Funcao para particionar o conjunto de dados (vetor)
 
int partition(int *vet, int inicio, int fim)
{
	int pivot,aux;
	pivot = vet[inicio];
	int indicePivot = inicio;
	while(inicio < fim)
	{
		while(vet[inicio] <= pivot)
			inicio++;
		while(vet[fim] > pivot)
			fim--;
		if(inicio < fim)
		{
			aux = vet[inicio];
			vet[inicio] = vet[fim];
			vet[fim] = aux;
		}
	}//fim do while que caminha nas duas direcoes 
	vet[indicePivot] = vet[fim];
	vet[fim] = pivot;
	return fim;
}
