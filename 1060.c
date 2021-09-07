#include <stdio.h>

int main(void) {
  
  float valor[6];
  int i, positivo;

  for(i = 0; i < 6; i++)
  {

    scanf("%f", &valor[i]);

    if(valor[i] > 0){

      positivo++;

    }

  }

    printf("%d valores positivos\n", positivo);

  return 0;
}
