#include <stdio.h>
#include <math.h>

int main(void) {
  
  double volume, raio, PI = 3.14159;

  scanf("%lf", &raio);

  volume = (4 * PI * pow(raio, 3)) / 3;

  printf("VOLUME = %.3lf\n", volume);

  return 0;

}