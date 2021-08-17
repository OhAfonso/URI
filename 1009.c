#include <stdio.h>

int main(void) {
  
  char nome[50];
  double salarioFixo, totalVendas, salarioTotal;

  scanf("%s", &nome[50]);

  scanf("%lf%lf", &salarioFixo, &totalVendas);

  salarioTotal = salarioFixo + (totalVendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", salarioTotal);

  return 0;
  
}