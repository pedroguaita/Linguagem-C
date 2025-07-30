/*
	Name: BuscaSequencial.c
	Author: Pedro Pereira Guaita
	Date: 04/06/25
	Description: Implementação do método de Recuperação de Informação com o algoritmo de Busca Linear ou Sequencial
*/
#include <stdio.h>
int main()
{
   int vetor[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45}; // vetor aleatório
   int i, seek, comp = 0, flag = 0;
   int tam = sizeof(vetor)/sizeof(int);
   
   puts("Conteudo do vetor:\n");
   for(i = 0; i < tam; i++)
   {
       printf("%d|", vetor[i]);
   }
   
   printf("\nDigite o valor a ser buscado: ");
   scanf("%d", &seek);
   
   for(i = 0; i < tam; i++)
   {
       comp++;
       if(vetor[i] == seek)
       {
           printf("\nO numero %d esta na posicao %d", vetor[i], i+1);
           flag = 1;
           break; // elemento encontrado
       }
   }
   
   if(flag == 1)
   {
       printf("\nComparacoes: %d", comp);
   }
   else
   {
       printf("\nDepois de %d comparacoes, o elemento %d nao foi encontrado!", comp, seek);
   }
   return 0;
}
