#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//sessao de prototipação

void inicio();
void menu();
void verConta();
void verSenha();
void verSaldo();
void fazerSaque();
void realizarDeposito();

//variáveis globais

float saldo = 1000.00;
int conta = 123;
int senha = 123;
char nome[12] = "Pedro";

int tentativas = 4;

int main()
{
    inicio();
    menu();
    
} //fim do programa


// funções

void inicio()
{
    puts("            Bem - vindo!\n");
    printf("Pressione ENTER para iniciar\n"); 
    getchar();
    
    puts("     -----------------------------\n");
}


void menu()
{
    int opcao;
    
    printf("Sistema de caixa de banco\n\n");
    
    printf("1. Saldo\n");
    printf("2. Saque\n");
    printf("3. Deposito\n");
    printf("4. Sair\n");
    
    printf("\nEscolha uma opçao:\n");
    scanf("%d", &opcao);
    
    switch(opcao)
    {
        case 1:
            verConta();
            verSaldo();
            break;
            
        case 2:
            verConta();
            fazerSaque();
            break;
            
        case 3:
            verConta();
            realizarDeposito();
            break;
            
        case 4:
            printf("Saindo...\n\n");
            inicio();
            break;
            
        default:
            printf("Valor invalido. Tente novamente.\n");
            menu();
            break; 
    }
}


void verConta()
{
    int login;
    
    printf("Conta: ");
    scanf("%d", &login);
    
    if(login == conta)
    {
        verSenha();
    }
    else
    {
        puts("Conta inexistente. Tente novamente.");
        verConta();
    }
}

void verSenha()
{
    int password;
    
    printf("Senha: ");
    scanf("%d", &password);
    
    if(password == senha)
    {
        printf("\n\nSeja Bem - vindo, %s!\n\n", nome);
    }
    else 
    {
        if(tentativas > 1)
        {
            tentativas --;
            printf("Senha incorreta! %d tentativa(s) restante(s).\n", tentativas);
            verSenha();
        }
        else
        {
            puts("\nSenha incorreta! Acesso negado!\n");
            exit(1);
        }
    }
    
}


void verSaldo()
{
    printf("=====================================\n");
    printf("O seu saldo é de R$ %.2f\n", saldo);
    printf("=====================================\n");
    printf("Pressione ENTER para voltar ao menu.\n\n");

    while (getchar() != '\n'); // Limpa o buffer do teclado
    getchar(); // Aguarda o usuário pressionar ENTER
    
    menu();

}



void fazerSaque()
{
    float valorSaque;
    
    int tecla;
    
    printf("Digite o valor que deseja sacar(R$): \n");
    scanf("%f", &valorSaque);
    
    if(valorSaque > saldo || valorSaque == 0)
    {
        printf("Saldo insuficiente ou igual a 0. Tente novamente.\n");
        printf("Saldo disponivel: R$ %.2f\n\n", saldo);
        fazerSaque();
    }
    else
    {
        saldo = saldo - valorSaque;
        
        puts("\nSaque realizado com sucesso!\n");
        puts("===============================");
        printf("Saldo disponivel: R$ %.2f\n", saldo);
        puts("================================");
        printf("Digite 1 para sacar novamente ou 2 para voltar ao menu:\n ");
        scanf("%d", &tecla);
        
        if(tecla == 1)
        {
            fazerSaque();
        }
        else
        {
            menu();
        }
    }
}


void realizarDeposito()
{
    float valorDeposito;
    int tecla;
    
    printf("Digite o valor que deseja depositar: ");
    scanf("%f", &valorDeposito);
    
    if(valorDeposito <= 0)
    {
        printf("Valor invalido, tente novamente\n");
        realizarDeposito();
    }
    else
    {
        saldo = saldo + valorDeposito;
        
        puts("Deposito realizado com sucesso!\n");
        puts("================================");
        printf("Saldo disponivel: %.2f", saldo);
        puts("================================");
        
        printf("\nDigite 1 para depositar novamente ou 2 para voltar ao menu: ");
        scanf("%d", &tecla);
        
        if(tecla == 1)
        {
            realizarDeposito();
        }
        else 
        {
            menu();
        }
    }
}

