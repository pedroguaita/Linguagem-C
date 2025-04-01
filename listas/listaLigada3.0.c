/*
	Name: listaLigada.c
	Author: Pedro Pereira Guaita
	Date: 19/03/25
	Description: Implementação lista encadeada (ligada)
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
typedef struct No
{
	char *nome;
	int idade;
	float altura;
	struct No *proximo;
};

typedef struc
{
	No *inicio, *fim;
	int tamanho;
} Lista;

//Função para inserir um Nó (elemento) no início da lista
void inserirInicioLista(Lista *lista, char *nome, int idade,float altura)
{
	No *novo = (No*)malloc(sizeof(No)); //reserva espaço na memória para armazenar um nó
	novo->nome = nome;
	novo->idade = idade;
	novo->altura = altura;

	
	if(lista->inicio == NULL) //A lista está vazia
	{
		novo->proximo = NULL;
		lista->inicio = novo;
		lista->fim = novo;
	}
	else//A lsita não está vazia
	{
		novo->proximo = lista->inicio;
		lista->inicio = novo;
	}
	lista->tamanho++;
	puts("Elemento inserido com sucesso!!");
	
	
}

// Função para inseirir um Nó(elemento) no fim da lista

void inserirFimLista(Lista *lista, char *nome, int idade,float altura)
{
	No *novo = (No*)malloc(sizeof(No)); //reserva espaço na memória para armazenar um nó
	novo->nome = nome;
	novo->idade = idade;
	novo->altura = altura;
	novo->proximo = NULL;
	
	if(lista->inicio == NULL)//Lista vazia
	{
		lista->inicio = novo;
		lista->fim = novo;	
	}
	else
	{
		lista->fim->proximo = novo;
		lista->fim = novo;
		
	}
	lista->tamanho++;
	
	puts("Elemento inserido no fim com sucesso");
}

//Função para exibir a lista
void exibirLista(Lista *lista
){
	
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	
	saved_attributes = consoleInfo.wAttributes;
	
	No *inicio = lista->inicio; //posiciona no primeiro nó da lista
	
	printf("\ntamanho da lista: %d\n\n", lista->tamanho);
	
	while(inicio != NULL)
	{
		printf("%s\n",&inicio->nome);
		printf("%d\n",inicio->idade);
		printf("%.2f\n",inicio->altura);
		SetConsoleTextAttribute(hConsole,FOREGROUND_RED);
		printf(" -> ");
		SetConsoleTextAttribute(hConsole, saved_attributes);
		inicio = inicio->proximo;
	}
	printf("NULL");
}

//Função para retirar um Nó(elemento) da lista
void retirarNoLista(Lista *lista, char *nomeRemover)
{
	No *inicio = lista->inicio; //ponteira para o primeiro nó da lista
	No *deleteNo = NULL;
	
	if(inicio != NULL && lista->inicio->nome == nomeRemover)//Remove o primeiro elemento caso seja o mesmo nome
	{
		deleteNo = lista->inicio;
		lista->inicio = deleteNo->proximo;
		
		if(lista->inicio == NULL)
		{
			lista->fim= NULL;
		}
	}
	else //Remover nós do meio ou do fim da lista
	{
		while(inicio != NULL && inicio->proximo != NULL && inicio->proximo->nome != nomeRemover)
		{
			inicio = inicio->proximo;
		}
		if(inicio != NULL && inicio != NULL)
		{
			
			deleteNo = inicio->proximo;
			inicio->proximo = deleteNo->proximo;
			if(inicio->proximo == NULL)
			{
				lista->fim = inicio;				
			}
		}
	}
	if(deleteNo)
	{
		free(deleteNo); //Libera o espaço de memória reservado para o nó
		lista->tamanho--;
	}
	
}

int main()
{
	
	Lista pessoas;
	pessoas.inicio = NULL;
	pessoas.fim = NULL;
	pessoas.tamanho = 0;
	
	char *nome;
	int idade;
	float altura;
	
	int opc = 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//		nome = "Mailson";
//	idade = 35;
//	altura = 1.76;
//	inserirInicioLista(&pessoas,nome,idade,altura);
//	
//	nome = "Dorival";
//	idade = 35;
//	altura = 1.76;
//	inserirFimLista(&pessoas,nome,idade,altura);
//	
//	nome = "Alana";
//	idade = 18;
//	altura = 1.66;
//	inserirInicioLista(&pessoas,nome,idade,altura);
//	
//	nome = "Luis Zubeldia";
//	idade = 44;
//	altura = 1.78;
//	inserirFimLista(&pessoas,nome,idade,altura);
//	
//	nome = "Caio Paulista";
//	idade = 25;
//	altura = 1.83;
//	inserirInicioLista(&pessoas,nome,idade,altura);
	
	while(1)
	{
		system("cls"); //Clear screen
		puts("1 - Inserir no inicio da lista");
		puts("2 - Inserir no fim da lista");
		puts("3 - Exibir a lista");
		puts("4 - Remover elemento da lista");
		puts("5 - Sair");
		printf("Escolha uma opcao: ");
		scanf("%d", &opc);
		
		switch(opc)
		{
			case 1:
				puts("Inserir no INICIO da lista");
				puts ("=========================");
				printf("Nome: "); scanf("%s", &nome);
				printf("Idade: "); scanf("%d", &idade);
				printf("Altura: "); scanf("%f", &altura);
				inserirInicioLista(&pessoas,nome, idade, altura);
				break;
			case 2:
				puts("Inserir no FIM da lista");
				puts ("=========================");
				printf("Nome: "); scanf("%s", &nome);
				printf("Idade: "); scanf("%d", &idade);
				printf("Altura: "); scanf("%f", &altura);
				inserirFimLista(&pessoas,nome, idade, altura);
				break;
			case 3:
				puts("Conteudo da lista: ");
				exibirLista(&pessoas);
			break;
			
			case 4:
				printf("Digite o nome da pessoa que deseja remover da lista: "); scanf("%s", &nome);
				retirarNoLista(&pessoas, nome);
				break;
			case 5: exit(0);
		}
			puts("\n\nPressione qualquer tecla para continuar...");
			getch();
			
	}
	
	

//	
//	
//	exibirLista(&pessoas);
//	
//	retirarNoLista(&pessoas, "Caio Paulista");
//	
//	exibirLista(&pessoas);
	
}

