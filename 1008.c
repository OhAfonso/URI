#include <stdio.h>

int main(void) {
 
int ht, numero;
double valor;

scanf("%d%d%lf", &numero, &ht, &valor);

valor *= ht;

printf("NUMBER = %d\nSALARY = U$ %.2lf", numero, valor);

  return 0;
}