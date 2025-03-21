/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// STRUCTS (ESTRUTURAS OU REGISTROS)

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa
{
    int idade;
    float peso;
    char nome[TAM];
};

typedef struct tipo_pessoa dados_pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    //Criando e inicializando
    dados_pessoa info = {0, 0.0, "Teste"};
    
    printf("Início:\n");
    printf("Nome: %s\n", info.nome);
    printf("Idade: %d\n", info.idade);
    printf("Peso: %.2f\n", info.peso);

    //Atribuindo valores aos campos
    info.idade = 20;
    info.peso = 77.00;
    strcpy(info.nome, "Pedro");
    
    printf("\nCampos alterados via código:\n\n");
    printf("Nome: %s\n", info.nome);
    printf("Idade: %d\n", info.idade);
    printf("Peso: %.2f\n", info.peso);
    
    //Solicitando inserções via teclado
    
    printf("\nInsira seu nome:\n");
    fgets(info.nome, 50, stdin);
    printf("Insira sua idade:\n");
    scanf("%d", &info.idade);
    fflush(stdin);
    printf("Insira seu peso:\n");
    scanf("%f", &info.peso);
    fflush(stdin);
    
    printf("\nAlterando com dados do usuário:\n\n");
    
    printf("Nome: %s", info.nome);
    printf("Idade: %d\n", info.idade);
    printf("Peso: %.2f\n", info.peso);


}