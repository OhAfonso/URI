#include <stdio.h>

int main(void) {
  
  int i, maior, posicao;
  int valor[100];
  maior = valor[0];

  for(i = 1; i <= 100; i++){

    scanf("%d", &valor[i]);

    if(valor[i] > maior){

      maior = valor[i];

    }

  }

  for(i = 1; i <= 100; i++){

    if(valor[i] == maior){

      posicao = i;

    }

  }

  printf("%d\n", maior);
  printf("%d\n", posicao);

  return 0;
}
