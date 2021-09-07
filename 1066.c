#include <stdio.h>

int main(void) {
  
  int valor[5];
  int i;
  int par = 0, impar = 0, positivo = 0, negativo = 0;

  for(i = 0; i < 5; i++)
  {

    scanf("%d", &valor[i]);

    if(valor[i] % 2 == 0){

      par++;

    }

    else if(valor[i] % 2 != 0){

      impar++;
    }

    if(valor[i] > 0){

      positivo++;

    }

    else if(valor[i] < 0){


      negativo++;

    }

  }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, positivo, negativo);



  return 0;
}
