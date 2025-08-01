#include <stdio.h>
/*
int main()
{
  float nota;

  printf("Insira a nota: \n");
  scanf("%f", &nota);

  if(nota >= 6.0)
  {
    printf("\nAprovado(a)!");
  }  
}
*/

/*
  int main()
{
  float nota;

  printf("Insira a nota: \n");
  scanf("%f", &nota);

  if (nota >= 6.0)
  {
    printf("Aprovado!\n");
  }

  if(nota < 6.0 && nota > 4.0)
  {
    printf("Tem direito a exame!\n");
  }  
  if (nota < 4.0)
  {
    printf("reprovado!\n");
  }
}
*/

int main()
{
  float nota;

  printf("Insira a sua nota:\n");
  scanf("%f", &nota);

  if (nota >= 6.0)
  {
    printf("Aprovado!\n");
  }
  else
  {
    printf("Reprovado!\n");
  }
}

