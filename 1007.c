#include <stdio.h>

int main(void) {
  
  int a, b, c, d, diferenca;

  scanf("%d%d%d%d", &a, &b, &c, &d);

  diferenca = a * b - c * d;

  printf("DIFERENCA = %.2d\n", diferenca);

  return 0;
}