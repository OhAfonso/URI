#include <stdio.h>

int main(void) {
  
  int valor[5];
  int i, par;

  for(i = 0; i < 5; i++)
  {

    scanf("%d", &valor[i]);

    if(valor[i] % 2 == 0){

      par++;

    }

  }

    printf("%d valores pares\n", par);

  return 0;
}
