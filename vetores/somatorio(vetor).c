/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10];
    int i, soma = 0;
    float media;
    
    for (i = 0; i < 10; i++)
    {
        printf("Insira um valor para a posição %d:\n", i + 1);
        scanf("%d", &vetor[i]);
        
        soma += vetor[i];
    }
    
    media = soma / 10;
    
    printf("Somatório: %d\n", soma);
    printf("Média: %.1f", media);
}
