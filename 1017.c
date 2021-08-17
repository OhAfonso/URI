#include <stdio.h>

int main(void) {
  
  float horas, velocidade, litros;

  scanf("%f%f", &horas, &velocidade);

  litros = (horas * velocidade ) / 12;

  printf("%.3f\n", litros);

  return 0;

}