/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int matriz[3][3];
    int l, c, soma;
    
    printf("Insira os dados da matriz 3x3: \n");
    for(l = 0; l < 3; l++)
    {
        for(c = 0; c < 3; c++)
        {
            printf("[%d][%d]: \n", l, c);
            scanf("%d", &matriz[l][c]);
            
            soma = soma + matriz[l][c];
        }
    }
    printf("\nA soma de todos os elementos da matriz é: %d\n", soma);
}

