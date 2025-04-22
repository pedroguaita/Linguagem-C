/*
	Name: bubble.c
	Author: Pedro Pereira Guaita
	Date: 16/04/25 11:15
	Description: programa para demonstrar o método de ordenação Bubble Sort
*/


#include <stdio.h>
#include <stdlib.h>

//sessao de prototipação


int main()
{
	 //                 0   1   2   3  4   5   6   7   8   9
	//int vetor[10] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
	//int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};       // vetor randomico
		
	//int vetor[] = {93, 72, 54, 45, 35, 28,21, 17, 12, 3};   //ordem decrescente  (pior caso) -> 45 comparações e 45 trocas
	//int vetor[] = {3, 12, 17, 21, 28, 35, 45, 54, 72, 93};  //ordem crescente (melhor caso)  -> 45 comparações e 0 trocas
	
	
	//int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45, 1, -5, 26};      outro exemplo.
	
	int vetor[10];
	int tam = sizeof(vetor)/sizeof(int);            //10(elementos)x4(bytes) = 40bytes     -> 40 / 4(bytes de int) = 10 elemetos
	int i, aux, comp, troca;
	
	comp = troca = 0;  //apenas performance
	
	// gerando numeros randomicamente
	
	tam = sizeof(vetor)/sizeof(int); 
	srand(time(NULL));
	for(i = 0; i < tam; i++)
	{
		vetor[i] = rand()%100;  // rand()%100   gera numeros entre 0 e 100
	}//fim do random
	
	
	puts("Vetor desordenado:\n");	
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
	
	
	//Lógica do Bubble sort	
	while(tam > 0)
	{
		for(i = 0; i < tam-1; i++) // tam - 1 pois vai até 9 o indice do vetor
		{
			comp++;  //apenas para analisar a performance
			
			if(vetor[i] > vetor[i+1])    //menor para o maior
			{
				aux = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
				troca++;
			}
		}
		tam --;
	
		
	/*	
		for(i = 0; i < tam-1; i++) 
		{
			if(vetor[i] > vetor[i+1])    //*** maior para o menor ***
			{
				aux = vetor[i+1];
				vetor[i+1] = vetor[i];
				vetor[i] = aux;
			}
		}
		tam --;
	*/
	
	}// fim do while
	
	tam = sizeof(vetor)/sizeof(int);
	puts("\n\nVetor ordenado com o Bubble sort:\n");
	
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
	
	printf("\n\n*** Comparacoes: %d ***", comp);
	printf("\n*** Trocas: %d", troca);	
} //fim do programa





