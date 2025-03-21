/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Vetores

#include <stdio.h>

int main()
{
    //inicializando vetor: ('vetor' pode ser substituído por outro nome)

    //        i     0    1   2   3   4
    int vetor[5] = {10, 20, 30, 40, 50}; //definindo dados do vetor
    int i;
    float soma = 0;
    
    for(i = 0; i < 5; i++)
    {
        soma = soma + vetor[i];
    }
    
    printf("Resultado: %.1f \n", soma/5);
}
