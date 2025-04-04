/*
	Name: listaLigada.cpp
	Author: Pedro Pereira Guaita
	Date: 19/03/25 11:37
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
}No;

typedef struct
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



// Função para inserir um Nó (elemento) no meio da lista, em uma posição específica
void inserirMeioLista(Lista *lista, char *nome, int idade, float altura, int posicao) {
    // Verifica se a posição é válida
    if(posicao < 0 || posicao > lista->tamanho) {
        puts("Posicao invalida!");
        return;
    }

    // Se a posição for 0, insere no início
    if(posicao == 0) {
        inserirInicioLista(lista, nome, idade, altura);
        return;
    }

    // Se a posição for igual ao tamanho, insere no fim
    if(posicao == lista->tamanho) {
        inserirFimLista(lista, nome, idade, altura);
        return;
    }

    No *novo = (No*)malloc(sizeof(No)); // Reserva espaço na memória
    novo->nome = nome;
    novo->idade = idade;
    novo->altura = altura;

    No *atual = lista->inicio;
    // Percorre até a posição anterior à desejada
    for(int i = 0; i < posicao - 1; i++) {
        atual = atual->proximo;
    }

    // Insere o novo nó na posição correta
    novo->proximo = atual->proximo;
    atual->proximo = novo;
    lista->tamanho++;

    puts("Elemento inserido no meio com sucesso!!");
}




//Função para exibir a lista
void exibirLista(Lista *lista)
{
	
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
		SetConsoleTextAttribute(hConsole,FOREGROUND_GREEN);
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
		
		if(lista->inicio == NULL){
			lista->fim= NULL;
		}
	}
	else //Remover nós do meio ou do fim da lista
	{
		while(inicio != NULL && inicio->proximo != NULL && inicio->proximo->nome != nomeRemover){
			inicio = inicio->proximo;
		}
		if(inicio != NULL && inicio != NULL){
			
			deleteNo = inicio->proximo;
			inicio->proximo = deleteNo->proximo;
			if(inicio->proximo == NULL){
				lista->fim = inicio;				
			}
		}
	}
	if(deleteNo){
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

	while(1)
	{
    	system("cls"); //Clear screen
    	puts("1 - Inserir no inicio da lista");
	    puts("2 - Inserir no fim da lista");
	    puts("3 - Exibir lista");
	    puts("4 - Remover elemento da lista");
	    puts("5 - Inserir no meio da lista");
	    puts("6 - Sair");
	    printf("Escolha uma opcao: ");
	    scanf("%d", &opc);
	    
    switch(opc){
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
        case 5: {
            int posicao;
            puts("Inserir no MEIO da lista");
            puts ("=========================");
            printf("Nome: "); scanf("%s", &nome);
            printf("Idade: "); scanf("%d", &idade);
            printf("Altura: "); scanf("%f", &altura);
            printf("Posicao (0 a %d): ", pessoas.tamanho); scanf("%d", &posicao);
            inserirMeioLista(&pessoas, nome, idade, altura, posicao);
            break;
        }
        case 6: 
            exit(0);
        default:
            puts("Opcao invalida!");
    }
    
    	puts("\n\nPressione qualquer tecla para continuar...");
    	getch();
	}
	
	
}

