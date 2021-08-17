#include <stdio.h>
#include <math.h>

int main(void) {
 
 double PI = 3.14159, raio, area;

 scanf("%lf", &raio);

 area = PI * pow(raio, 2.0);

 printf("A= %.4lf\n", area);


  return 0;
}