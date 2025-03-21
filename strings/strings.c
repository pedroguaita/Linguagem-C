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
int main()
{
    char string[11];
    
    printf("Digite algo (scanf convencional):\n");
    scanf("%s", string);
    fflush(stdin);
    
    printf("Resultado: %s \n\n", string);
    
    printf("Digite algo (scanf aprimorado):\n");
    scanf("%9[^\n]s", string);
    fflush(stdin);

    printf("Resultado: %s \n\n", string);
    
    return 0;
}


/* Funções de entrada e saída (usando as variáveis acima).

gets(<string>);
ex:

printf("Digite algo: \n");
gets(string);
fflush(stdin);

puts("Resultado:");
puts(string);
puts("");

***********************************************************************************************************************************

fgets(<string>, <tam>, stdin); //stdin = entrada de dados padrão (teclado). 
ex:

printf("Digite algo: \n");
fgets(string, 10, stdin);
fflush(stdin);

puts("Resultado:");
puts(string);
puts("");

***********************************************************************************************************************************
puts(<string>);


fflush(stdin); // chamar sempre depois de uma entrada de dados, para a próxima entrada não dar problema, principalmente com char ou float.
(usar geralmente depois do gets e fgets).


*/