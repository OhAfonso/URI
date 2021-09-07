#include <stdio.h>

int main(void) {
  
  int n, i, contador, x, y, impar;

  scanf("%d", &n);

  int valor[n];

  for(i = 0; i < n; i++){

    scanf("%d%d", &x, &y);

    impar = 0;
    valor[i] = 0;

    if(x > y){
      for(contador = y + 1; contador < x; contador++){

        if(contador % 2 != 0){

          impar += contador;
          
          valor[i] = impar;

        }

        //valor[i] = impar;

      }
    
    }

    else if(y > x){

      for(contador = x + 1; contador < y; contador++){
        // contador = 3; y = 8; -- 3 < 8
        if(contador % 2 != 0){

          impar += contador;

          valor[i] = impar;

        }

        //valor[i] = impar;

      }

    }

  }

  for(i = 0; i < n; i++){

    printf("%d\n", valor[i]);

  }


  return 0;
}
