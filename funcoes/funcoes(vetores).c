/*
# STRUCT:

<tipo>  <nome da função> (<tipo_struct>, <parametro>)
  |                           |
|int|              |nome do tipo da struct|      
|void|                ex: |Nome nome|
|float|                |Pessoas pessoa| 
|char|


#  VETORES:

<tipo> <função>(<tipo> <vet[]>, int tam)

<tipo> <função>(<tipo> <vet>, (<tam>])

<tipo> <função>(<tipo> <*vet>, int tam)

# MATRIZES
                                     tamanho da primeira dimensao
                                       |
<tipo> <função>(<tipo m[] [<tam2>], int tam1)
                              |
                           tamanho da segunda dimensao ou outras seguintes
*/

#include <stdio.h>

void imprime1(int v[], int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
}

void imprime2(int v[5])
{
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d ", v[i]);
	}
}


void imprime3(int *v, int n)
{
	int i;
	
	for(i = 0; i < n; i++)
	{
		printf("%d ", v[i]);
	}
}



int main()
{
	int vet[5] = {1, 2 ,3, 4, 5};
	
	puts("Primeiro imprime:");
	imprime1(vet, 5);
	
	puts("\nimeiro imprime:");
	imprime2(vet);
	
	puts("\nimeiro imprime:");
	imprime3(vet, 5);
}
