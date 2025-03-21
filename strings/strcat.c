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
    char s1[N] = {"Lógica de "};
    char s2[N] = {"Programação"};
    
    printf("Antes do strcat: \n");
    printf("\nstr1: %s \n", s1);
    printf("str2: %s \n", s2);
    
    strcat(s1, s2);
    
    printf("\nDepois do strcat: \n");
    puts(s1);
}
