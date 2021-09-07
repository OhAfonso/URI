#include <stdio.h>

int main(void) {
  
  int x, y, i, soma;

  scanf("%d%d", &x, &y);

    soma = 0;


  if(x < y){

    y -= 1;

    for(i = y; i > x; i--){

      if(i % 2 != 0){

        soma += i;

      }

    }

  }  

  else if(y < x){

    x -= 1;

    for(i = x; i > y; i--){

      if(i % 2 != 0){

        soma += i;

      }

    }

  }


  printf("%d\n", soma);



  return 0;
}
