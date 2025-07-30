/*
	Name: BuscaBinária.cpp
	Author: Pedro Pereira Guaita
	Date: 04/06/25 10:54
	Description: Implementação do método de Recuperação de Informação chamado Busca Binária ou Logarítmica
*/

#include <stdio.h>


main()
{
	 //               0   1   2   3  4   5   6   7   8   9
	//int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};       // vetor randomico
		
	int vetor[] = {3, 12, 17, 21, 28, 35, 45, 54, 72, 93};  
	
	int i, inicio, fim, meio, comp;
	int seek;
	int flag = 0; //valor simulado booleano, pois em C nao existe
	
	int tam = sizeof(vetor)/sizeof(int);
	puts("Conteudo do vetor:\n");	
	for(i = 0; i < tam; i++)
	{
		printf("%d|", vetor[i]);
	}
	
	printf("\n\nDigite um numero a ser pesquisado: ");
	scanf("%d", &seek);
	
	inicio = 0;
	fim = tam - 1;
	
	while(flag != 1 && inicio <= fim)
	{
		meio = (inicio + fim)/2;
		
		comp++;
		if(vetor[meio] == seek)
			flag = 1;				
		if(vetor[meio] > seek)
			fim = meio - 1;
		else
			inicio = meio + 1;
	}
	
	if(flag == 1)
	{
		printf("\nO elemento %d esta na posicao %d", vetor[meio], meio + 1);
		printf("\nNumero de comparacoes: %d", comp);	
	}	
	else
		puts("\nElemento nao encontrado!");
		
}//fim do programa




