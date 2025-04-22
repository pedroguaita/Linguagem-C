/*
	Name: pilha.c
	Author: Pedro Pereira Guaita 
	Date: 09/04/25
	Description: Implementa��o de pilhas LIFO - Last In First Out
*/

//sessao de importa��o
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>

//sessao de prototipa��o
void push(int); //fun��o que insere na pilha             / recebe um int
int pop();     //fun��o que retira um elemento da pilha   / devolve um int

int isEmpty(); // retorna 1 quando est� vazia e 0 quando ainda tem elemento
int isFull();  // retorna 1 quando est� cheia e 0 quando ainda tem espa�o de armazenamento na pilha

int top(); //retorna o elemento que est� no topo da pilha
void showLIFO(); //exibe o conteudo da pilha
void conversorBinario(int); // fun��o nova para conversor bin�rio

//variaveis globais
int pilha[10];
int topo = -1;       //guarda um �ndice    //aponta para o topo        //nao existe o endere�o -1, apenas uma imagina��o


int main()
{
	while(1)
	{
		int menu = 0;
		printf("1 - Inserir na Pilha\n2 - Retirar da Pilha\n3 - Exibir Pilha\n4 - Elemento no Topo\n5 - Conversor Binario\n6 - Sair...");	
		printf("\nOpcao: ");
		scanf("%d", &menu);
		switch(menu)
		{
			case 1: 
				int e;
				e = 0;
				printf("Digite um numero inteiro: ");
				scanf("%d", &e);
				push(e);
				break;
			case 2:
				pop();
				break;
			case 3:
				showLIFO();
				break;
			case 4: 
				printf("\nElemento do TOPO: %d", top());
				break;
			case 5:
				int n;
				printf("Digite um numero inteiro positivo: ");
				scanf("%d", &n);
				if(n < 0)
					printf("Numero invalido!\n");
				else
					conversorBinario(n);
				break;
			case 6:
				exit(1);
			default:
				puts("opcao invalida!");
				break;
		}//fim do switch
		puts("\n\nPressione qualquer tecla para continuar...");
		getch();
		system("cls");
	}
}//fim do main


//fun��es:

//fun��o que insere na pilha             / recebe um int
void push(int elemento)
{
	if(isFull() == 1)
		puts("====>Pilha cheia - Stack Overflow");
	else
	{
		topo++;
		pilha[topo] = elemento;        //o topo recebe o elemento
	}
}


//fun��o que retira um elemento da pilha   / devolve um int
int pop()
{
	if(isEmpty() == 1)
	{
		puts("====>Pilha vazia.");
		return -1;
	}
	else
	{
		int elemento;
		elemento = pilha[topo];
		topo--;
		return elemento;
	}
}    


// retorna 1 quando est� vazia e 0 quando ainda tem elemento
int isEmpty()
{
	if(topo == -1)
		return 1;
	else
		return 0;
}


// retorna 1 quando est� cheia e 0 quando ainda tem espa�o de armazenamento na pilha
int isFull()
{
	if(topo == 9)
		return 1;
	else
		return 0;
}


//retorna o elemento que est� no topo da pilha
int top()
{
	return pilha[topo];      //apontado para o topo
}


//exibe o conteudo da pilha
void showLIFO()
{
	puts("\nConteudo da pilha: ");
	if(isEmpty() == 1)
		puts("A pilha ja esta vazia!");
	else
	{
		int i;
		for(i = topo; i >= 0; i--)
			printf("%d\n", pilha[i]);
	}
}


//fun��o para convers�o de decimal para bin�rio usando pilha
void conversorBinario(int decimal)
{
	topo = -1; // limpa a pilha antes de usar

	if(decimal == 0)
	{
		printf("Binario: 0\n");
		return;
	}

	while(decimal > 0)
	{
		push(decimal % 2);
		decimal = decimal / 2;
	}

	printf("Binario: ");
	while(isEmpty() == 0)
	{
		printf("%d", pop());
	}
	printf("\n");
}

