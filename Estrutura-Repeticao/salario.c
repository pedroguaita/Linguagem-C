/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano, i;
    float sal, sal_novo, porc;
    
    printf("Insira o ano atual:\n");
    scanf("%d", &ano);
    
    sal = 1000;
    porc = 1.5/100;
    sal_novo = sal + sal*porc;
    
    for(i = 2017; i <= ano; i++)
    {
        porc = 2 * porc;
        sal_novo = sal_novo + sal_novo*porc;
    }
    
    printf("O salário atual é: %.2f.\n", sal_novo);

    return 0;
}
