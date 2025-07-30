/*
	Name: Filas.cpp
	Author: Pedro Pereira Guaita 
	Date: 02/04/25 
	Description: Implementação de filas em C       FIFO (Firts In First Out)
*/

//sessão de importação
#include <stdio.h>


//sessão de prototipação

void enqueue(int);   //função para inserir elementos na fila                    void (int) recebe um inteiro
int dequeue();      //Retirar um elemento da fila                                int() retorna um int
int isFull();      //Testa se a fila está cheia
int isEmpty();    // Testa se a fila está vazia
void showFIFO(); //Exibir o conteudo da fila

//variáveis globais
int inicio, fim, tamanho, total;               //total = quantidade de elementos que a fila possue
int senhas[7];

int main()
{
	total = 0;
	inicio = 0;
	fim = 0;
	tamanho = 0;
	tamanho = sizeof(senhas)/sizeof(int);                                    //tamanho da estrutura
	
	printf("Tamanho do vetor: %d", tamanho);                                // 28 / 4 = 7 (quantidade de elementos)
 // printf("\nTamanho do vetor em bytes: %d", sizeof(senhas));             //  7 x 4 = 28 (tamanho em bytes)
	
	enqueue(446);
	enqueue(15);
	enqueue(74);
	enqueue(303);
	
	showFIFO();
	
	printf("\n\nSaindo: %d", dequeue());
	printf("\nSaindo: %d", dequeue());
	printf("\nSaindo: %d", dequeue());
	printf("\nSaindo: %d", dequeue());
	printf("\nSaindo: %d", dequeue());
	
	showFIFO();
	
} //fim do main


//inserir elementos na fila    (enfileirar)
void enqueue(int elemento)
{
	if(isFull() == 1)
		puts("\n\nA Fila esta cheia!");
	else
	{
		senhas[fim] = elemento;
		fim = fim + 1;
		total++;
	}
}


//Retirar um elemento da fila  (desenfileirar)
int dequeue()
{
	if(isEmpty() == 1)
		puts("\n\nA Fila esta vazia!");
	
	else
	{
		int elemento;
		elemento = senhas[inicio];
		inicio++;	
		total--;
		
		return elemento;
	}	
}


//Testa se a fila está cheia
int isFull()
{
	if(total == tamanho)
		return 1;            // retorna verdadeiro (1), está cheia
	else
		return 0;           // retorna falso(0), pode por mais elementos
}


// Testa se a fila está vazia
int isEmpty()
{
	if(total == 0)
		return 1;               
	else
		return 0;
}


//Exibir o conteudo da fila
void showFIFO()
{
	int contador, i;
	puts("\n\nConteudo da Fila:\n ");
	
	for(contador = 0, i = inicio; contador < total; contador++)
	{
		printf("%d|", senhas[i++]);      //i++(primeiro usa o valor e depois incrementa  |  ++i (incrementa e depois usa o valor)
		
		if(i == tamanho)
			i = 0;
	}
}














