#include <stdlib.h>
#include <string.h>
#include <stdio.h>

//prototipacoes

void inicio();
void menu();
void verConta();
void verSenha();
void verSaldo();
void fazerSaque();
void fazerDeposito();

//variaveis globais

int conta = 123;
float saldo = 1000;
int senha = 123;
int tentativas = 4;
char *nome = "Pedro";
int main()
{
	inicio();
	menu();

} //fim do programa


void inicio()
{
	puts("Bem-Vindo!\n");
	printf("Pressione ENTER duas vezes para continuar...");
	
	while (getchar() != '\n');
	getchar();
	system("cls");
}



void menu()
{
	int opcao;

	printf("*** Caixa eletronico ***\n\n");
	puts("1 - Saldo \n2 - Saque\n3 - Deposito\n4 - Sair");
	printf("\n\n-> Escolha uma opcao: ");
	scanf("%d", &opcao);

	switch(opcao)
	{
	case 1:
		verConta();
		verSaldo();
		system("cls");
		
		break;

	case 2:
		verConta();
		fazerSaque();
		system("cls");

		break;

	case 3:
		verConta();
		fazerDeposito();
		system("cls");
	
		break;

	case 4:
		inicio();
		
		break;

	default:
		puts("Esta opcao nao existe. Tente novamente.\n");
		system("pause");
		system("cls");
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
		puts("Esta conta nao existe. Tente novamente.\n");
		system("pause");
		system("cls");
		verConta();
	}
}


void verSenha()
{
	int codigo;

	printf("Senha: ");
	scanf("%d", &codigo);

	if(codigo == senha)
	{
		printf("\n*** Seja bem-vindo, %s! ***\n\n", nome);
	}
	else
	{
		if(tentativas > 1)
		{
			tentativas--;
			printf("Senha incorreta. Tente novamente! (%d tentativas restantes.)\n", tentativas);
			system("pause");
			system("cls");
			verSenha();
		}
		else
		{
			puts("Acesso bloqueado por questoes de seguranca!");
			exit(1);
		}
	}
}


void verSaldo()
{
	printf("-> Saldo disponivel: R$%.2f \n", saldo);
	printf("\n*** Pressione qualquer tecla para retornar ao menu. ***");

	while (getchar() != '\n');
	getchar();
	system("cls");
	menu();
}


void fazerSaque()
{
	float valor;

	printf("Digite o valor(R$) que deseja sacar: ");
	scanf("%f", &valor);

	if(valor > saldo || saldo <= 0)
	{
		puts("\nSaldo insuficiente. Tente novamente\n");
		printf("Saldo disponivel: R$%.2f", saldo);

		system("pause");
		system("cls");

		fazerSaque();
	}
	else
	{
        saldo = saldo - valor;
        
        puts("Saque realizado com sucesso!\n");
        printf("Saldo disponível: R$%.2f", saldo);
        
        printf("\n\n*** Pressione qualquer tecla para continuar ***");
        while (getchar() != '\n');
	    getchar();
	    
	    menu();
	}
}


void fazerDeposito()
{
    float valor;
    
    printf("Digite o valor(R$) que deseja depositar: ");
    scanf("%f", &valor);
    
    if(valor <= 0)
    {
        puts("Valor invalido. Tente novamente");
        system("pause");
        system("cls");
        fazerDeposito();
    }
    else
    {
        saldo = saldo + valor;
        
        puts("Deposito realizado com sucesso!\n");
        printf("Saldo disponivel: %.2f", saldo);
        
        system("pause");
        system("cls");
        menu();
    }
}










