#include <stdio.h>

int main()
{
  int i;

  //Continue:

  for (i=1; i<=10; i++)
    {
      if(i == 5) // essa condição faz com que o 5 não apareça na tela.
      {
        continue;
      }

      printf("%d ", i);
    }

  //Break:
  /*for(i = 1; i <= 10; i++)
    {
      printf("%d ", i);

      if(i == 5)   aqui faz com que o programa pare no 5. 
      {
        break;
      }
    }*/
}