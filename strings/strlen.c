/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
    char s[N];
    int i;
    
    printf("Digite um texto:\n");
    gets(s);
    i = strlen(s);
    printf("\nTamanho do texto: %d\n\n", i);
    
    printf("impressão de posição a posição: \n");
    
    for(i = 0; i < strlen(s); i++) // ou usar um puts(s).
    {
        printf("%c", s[i]);
    }
}
