#include <stdio.h>
#include <math.h>

int main(void) {
  
  double x1, y1, x2, y2, total;

  scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

  total = sqrt(pow(x2 - x1, 2) + pow(y2 -y1, 2));

  printf("%.4lf\n", total);

  return 0;
}