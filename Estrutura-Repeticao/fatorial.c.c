/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int fat, N, i;
    
    printf("Insira um valor para N: \n");
    scanf("%d", &N);
    
    fat = 1;
    for(i=N; i>=1; i--)
    {
        fat = fat * i;
    }
    
    printf("O fatorial de %d é %d.\n", N, fat);
    
    return 0;
}
