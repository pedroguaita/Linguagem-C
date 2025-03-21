/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float num1, num2, res;
    char op;
    
   do
   {
        printf("Insira um número:\n");
        scanf("%f", &num1);
        fflush(stdin);
        printf("Insira a potência:\n");
        scanf("%f", &num2);
        fflush(stdin);
        
        res = pow(num1, num2);
        
        printf("%.0f elevado a %.0f é igual a: %.1f\n", num1, num2, res);
        
        printf("Deseja realizar o cálculo novamente?(tecle s para sim) \n");
        scanf("%c", &op);
        fflush(stdin);
        
   }
   while(op == 's' || op == 'S');
    

    return 0;
}
