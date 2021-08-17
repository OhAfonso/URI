#include <stdio.h>

int main(void) {
  
  int x;
  float y, total;

  scanf("%d%f", &x, &y);

  total = x / y;

  printf("%.3f km/l\n", total);

  return 0;
}