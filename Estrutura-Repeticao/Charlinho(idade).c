/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anos;
    float C, B;
    
    C = 140;
    B = 145;
    
    anos = 0;
    
    while(C <= B)
    {
        anos++;
        C += 2.1;
        B += 1.1;
    }
    
   
    printf("Para Charlinho passar seu irmão, serão necessários %d anos", anos);

    return 0;
}
