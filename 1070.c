#include <stdio.h>

int main(void) {
  
  int x, i = 0;

  scanf("%d", &x);

  while(i < 6){

    if(x % 2 != 0){

      printf("%d\n", x);
      i++;

    }

    x++;

  }

  return 0;
}
