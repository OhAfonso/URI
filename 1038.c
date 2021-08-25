#include <stdio.h>

int main(void) {
  
  int codigo, quantidade;
  float total;

  scanf("%d%d", &codigo, &quantidade);

  if(codigo == 1){

    total = quantidade * 4.00;

    printf("Total: R$ %.2f\n", total);

  }

  else{

    if(codigo == 2){

      total = quantidade * 4.50;

      printf("Total: R$ %.2f\n", total);

    }

    else{

      if(codigo == 3){

        total = quantidade * 5.00;

        printf("Total: R$ %.2f\n", total);

      }

      else{

        if(codigo == 4){

          total = quantidade * 2.00;

          printf("Total: R$ %.2f\n", total);

        }

        else{

          if(codigo == 5){

            total = quantidade * 1.50;

            printf("Total: R$ %.2f\n", total);

          }

        }

      }

    }

  }

  return 0;
}