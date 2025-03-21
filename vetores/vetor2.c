/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//Vetores 02

#include <stdio.h>

int main()
{
    int vetor[5]; // vetor com apenas o tamanho definido
    int i;
    
    for(i = 0; i < 5; i++)
    {
        printf("Insira um dado: \n");
        scanf("%d", &vetor[i]); // definindo onde a variável 'i' vai atuar.
    }
    
    printf("Dados inseridos: \n");
    
    for(i = 0; i < 5; i++)
    {
        printf("%d ",vetor[i]);
    }
    
    return 0;
}
