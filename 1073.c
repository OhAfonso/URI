#include <stdio.h>

int main(void) {
  
  int n, i, raiz;

  scanf("%d", &n);

  for(i = 1; i <= n; i++){

    if(i % 2 == 0){

      raiz = i * i;
      printf("%d^2 = %d\n", i, raiz);

    }

  }


  return 0;
}
