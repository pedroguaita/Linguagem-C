/*
    nome: heapSort.c
    autor: Pedro Pereira Guaita
    data: 21/05/24
    descrição: implementação do método de ordenação Heap Sort.
*/

#include <stdio.h>
#include <stdlib.h>

//sessão de prototipação
void heapfy(int *, int, int i);  //recebe o vetor, o tamanho e o indice i.   heapfy(int vet[], tam, i)
void heapSort(int *, int);        //heapSort(int vet[], tam)

int main()
{
    int i, tam;
    int vet[] = {35, 72, 17, 3, 28, 93, 54, 12, 21, 45};
    
    tam = sizeof(vet)/sizeof(int);
    
    puts("Vetor desordenado:\n");
    for(i = 0; i , tam; i++)
    {
        printf("%d|", vet[i]);
    }
    
    heapSort(vet, tam);
    
    puts("Vetor ordenado:\n");
    for(i = 0; i , tam; i++)
    {
        printf("%d|", vet[i]);
    }
    
}//fim do main


//função recursiva que sempre testa se o nó pai é maior que os seus filhos
// no caso MAX HEAP.
void heapfy(int vet[], int tam, int i)
{
    int maior = i;
    int esq = 2 * i + 1;  //filho da esquerda
    int dir = 2 * i + 2;  //filho da direita
    
    //arvore ainda existe && filho for maior que o pai
    if(esq < tam && vet[esq] > vet[maior])
    {
        maior = esq;      //trocando os indices
    }
    
    if(dir < tam && vet[dir] > vet[maior])
    {
        maior = dir;     //trocando apenas os indices
    }
    
    if(maior != i)  //aqui acontece a troca
    {
        int aux;
        
        aux = vet[i];
        vet[i] = vet[maior];
        vet[maior] = aux;
        
        heapfy(vet, tam, maior);   //passando o vetor, tamanho e o indice do maior.
    }
}//fim da função recursiva heapfy

//função heapSort
void heapSort(int vet[], int tam)
{
    for(int i = tam / 2 - 1; i >= 0; i--)  //tam -1, pois o tam retorna o numero d elementos e nao dos indices
    {
        heapfy(vet, tam, i);
    }
    
    //aqui faz o swap
    for(int i = tam - 1; i > 0; i--)
    {
       int aux = vet[0];
       vet[0] = vet[i];
       vet[i] = aux;
       
       heapfy(vet, i, 0);
    }
    
}//fim da função heapSort















