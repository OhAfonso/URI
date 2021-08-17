#include <stdio.h>

int main(void) {
  
  int valor, cedula100, cedula50, cedula20, cedula10, cedula5, cedula2, cedula1;

  scanf("%d", &valor);

  printf("%d\n", valor);

  cedula100 = valor / 100;
  valor = valor % 100;

  cedula50 = valor / 50;
  valor = valor % 50;

  cedula20 = valor / 20;
  valor = valor % 20;

  cedula10 = valor / 10;
  valor = valor % 10;

  cedula5 = valor / 5;
  valor = valor % 5;

  cedula2 = valor / 2;
  valor = valor % 2;

  cedula1 = valor;

  printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", cedula100, cedula50, cedula20, cedula10, cedula5, cedula2, cedula1);

  return 0;
}