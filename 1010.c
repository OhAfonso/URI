#include <stdio.h>

int main(void) {

   int cod1, nu1, cod2, nu2;
   double valorUni1, valorUni2, valorPago;

   scanf("%d%d%lf%d%d%lf", &cod1, &nu1, &valorUni1, &cod2, &nu2, &valorUni2); 

  valorPago = (nu1 * valorUni1) + (nu2 * valorUni2);

  printf("VALOR A PAGAR: R$ %.2lf\n", valorPago);

  return 0;
}