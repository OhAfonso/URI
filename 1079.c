#include <stdio.h>

int main(void) {
  
  int n, i;

  scanf("%d", &n);
  float media[n];
  float valor1, valor2, valor3;

  for(i = 0; i < n; i++){

    scanf("%f%f%f", &valor1, &valor2, &valor3);

    media[i] = (valor1 * 2 + valor2 * 3 + valor3 * 5) / (2 + 3 + 5);

  }

  for(i = 0; i < n; i++){

    printf("%.1f\n", media[i]);

  }


  return 0;
}
