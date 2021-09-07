#include <stdio.h>

int main(void) {
  
double salario, percentual, reajuste;

scanf("%lf", &salario);

if(salario >= 0 && salario <= 400.00){

  reajuste = salario * 0.15;
  salario += reajuste;

  printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 15 %%\n", salario, reajuste);

}

else{

  if(salario >= 400.01 && salario <= 800.00){

    reajuste = salario * 0.12;
    salario += reajuste;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 12 %%\n", salario, reajuste);

  }

  else{

    if(salario >= 800.01 && salario <= 1200.00){

      reajuste = salario * 0.1;
      salario += reajuste;

      printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 10 %%\n", salario, reajuste);

    }

    else{

      if(salario >= 1200.01 && salario <= 2000.00){

        reajuste = salario * 0.07;
        salario += reajuste;

        printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 7 %%\n", salario, reajuste);

      }

      else{

        if(salario > 2000.00){

          reajuste = salario * 0.04;
          salario += reajuste;

          printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: 4 %%\n", salario, reajuste);

        }

      }

    }


  }

}

  return 0;
}
