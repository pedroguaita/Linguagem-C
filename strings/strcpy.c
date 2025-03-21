/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/* BIBLIOTECA string.h

strcpy(<destino>, <origem>); //atribuição, serve para alterar o conteúdo de uma string via código (string não se altera com '=').

strcat(<destino>, <origem>); // Colar uma string na outra.

srtlen(<string>); // mostra o tamanho da string

strcmp(<string>, <string2>); // compara a igualdade das strings 

BIBLIOTECA locale.h

setlocale(LC_ALL, "Portuguese");

*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20 // definindo tamanho para os vetores N.

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char origem[N] = {"Olá, mundo!"}; // definindo conteúdo do vetor.
    char destino[N];
    
    printf("Antes do strcpy: \n");
    puts(origem);
    puts(destino);
    
    strcpy(destino, origem); //'destino' passa a ter o conteúdo de 'origem' (destino = origem).
    
    printf("Depois do strcpy: \n");
    puts(origem);
    puts(destino);
}