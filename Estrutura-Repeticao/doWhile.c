/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int contador = 0, num;
    
    do
    {
        printf("Insira um número: \n");
        scanf("%d", &num);
        
        if(num > 0)
        {
            contador++;
        }
    }
    while(num != 0);
    
    printf("Quantidade de números positivos: %d", contador);
    

    return 0;
}
