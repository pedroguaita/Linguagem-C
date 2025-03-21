#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct pessoas
{
	char nome[50];
	int idade;
	float altura, peso;
};

int main()
{
	int i;
	pessoas pessoa[2];

	for(i = 0; i < 2; i++)
	{
		printf("\nInsira o nome da pessoa (%d):\n", i + 1);
		scanf("%s", &pessoa[i].nome);
		
		printf("\nInsira a idade da pessoa (%d):\n", i +1);
		scanf("%d", &pessoa[i].idade);
		
		printf("\nInsira o peso da pessoa (%d):\n", i + 1);
		scanf("%f", &pessoa[i].peso);
		
		printf("\nInsira a altura da pessoa (%d):\n", i + 1);
		scanf("%f", &pessoa[i].altura);
		puts("---------------------------------------");
	}
	system("cls");
	
	puts("\nDados registrados:\n");
	
	for(i = 0; i < 2; i ++)
	{
		printf("\nPessoa (%d)\n", i + 1);
		printf("Nome: %s\n", pessoa[i].nome);
		printf("Idade: %d\n", pessoa[i].idade);
		printf("Peso: %.1f\n", pessoa[i].peso);
		printf("Altura: %.1f\n", pessoa[i].altura);
		
		puts("-----------------------------------");
	}
	
}
