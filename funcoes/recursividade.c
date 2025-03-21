/*
 * PROGRAMA: Recursiva1.cpp
 *Author: Pedro Pereira Guaita
 *Data: Criado em 26 de Fevereiro de 2025
 *Descrição: Programa para demonstrar a utilização do conceito de Recursividade
 */
  
  //recursividade não tem laço de repetição, resolva usando ela.

#include <stdio.h> // standard Input/Output
 
 //Sessão de prototipação
 void imprimir(int);
 int lerNum();
 void linha();
 
 int main()
 {
    puts("Iniciando a chamada recursiva:\n");
    imprimir(0);
    
    lerNum();
    puts("\nFIM - Você digitou 99 para finalizar a recursão");
    
    linha();
    //depois da recursao, o controle volta para a main:
    float alt = 0;
    printf("\nDigite sua altura: ");
    scanf("%f", &alt);
    
        if(alt < 1.71)
        {
            puts("Indivíduo baixo");
        }
        else
        {
           puts("Indivíduo alto"); 
        }
            
 }
 
 //função
 
 void imprimir(int x)
 {
    if(x == 10)
        return;
        
    printf("%d  ", x);
    //printf("-");
  
    //x ++;
    //imprimir(x);
    
    //ou: imprimir(++x); aqui da certo. 
    imprimir(x+1); //invoca a chamada à função de maneira Recursiva
    puts("\n");
     //------------------------------------------------------------------------------------------------
    //imprimir(x++) neste caso não da certo. X++ usa o valor e dps incrementa, ja o ++X é o contrário
   //-------------------------------------------------------------------------------------------------
   
    printf("\nFim da %da chamada: ",x);
    linha();
 }
 
 int lerNum()
 {
    int num = 0;
    printf("\n\nDigite um número: ");
    scanf("%d", &num);
        
        if(num == 99)
           return num;
    
    printf("Número digitado: %d", num);
    lerNum();
    //puts("FIM - Você digitou 99 para finalizar a recursão");  >>> responde cada chamada que eu fiz, ou seja, a quantidade de vezes que digitei um numero.
 }
 
 void linha()
 {
     puts("\n_______________________");
 }
