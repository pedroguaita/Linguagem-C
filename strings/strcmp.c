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
    char hardtext[N] = {"/exit"};
    char senha_usr[N];
    int ok;
    
    printf("Digite um texto: \n")
    gets(senha_usr);
    
    ok = strcmp(hardtext, senha_usr);
    
    if(ok == 0)
    {
        printf("Textos iguais.\n");
    }
    else
    {
        printf("Textos diferentes.\n");
    }
}

