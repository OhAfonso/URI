#include <stdio.h>

int main(void) {
  
  int numero, i, x = 0, y = 0;

  scanf("%d", &numero);

  int valor[numero];

  for(i = 0; i < numero; i++){

    scanf("%d", &valor[i]);

    if(valor[i] >= 10 && valor[i] <= 20){

      x += 1;

    }

    else if(valor[i] < 10 || valor[i] > 20){

      y +=1;

    }

  }

  printf("%d in\n%d out\n", x, y);

  return 0;
}
