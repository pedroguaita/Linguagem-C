/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    tipo_pessoa lista[TAM];
    int i;
    
    for(i = 0; i < TAM; i++)
    {
        printf("Insira os dados (%d):\n", i+1);
        puts("Nome: ");
        scanf("%50[^\n]s", &lista[i].nome);
        fflush(stdin);
        
        puts("Idade: ");
        scanf("%d", &lista[i].idade);
        fflush(stdin);
        
        puts("Peso: ");
        scanf("%f", &lista[i].peso);
        fflush(stdin);
    }
    system("cls");
    
    puts("Seus dados:\n");
    for(i = 0; i < TAM; i++)
    {
        printf("-------------- Pessoa %d -----------------\n", i+1);
        printf("\tNome: %s\n", lista[i].nome);
        printf("\tIdade: %d\n", lista[i].idade);
        printf("\tPeso: %f\n", lista[i].peso);
    }
    printf("------------------------------------------\n");
}
