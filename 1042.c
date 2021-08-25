#include <stdio.h>

int main(void) {
  
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  if( a < b && a < c){

    printf("%d\n", a);

    if(b < c){
    
      printf("%d\n%d\n", b, c);
      printf("\n");
      printf("%d\n%d\n%d\n", a, b, c);

    }
  
    else{

      printf("%d\n%d\n", c, b);
      printf("\n");
      printf("%d\n%d\n%d\n", a, b, c);

    }
  }

  else{

    if(b < a && b < c){

      printf("%d\n", b);

      if(a < c){

        printf("%d\n%d\n", a, c);
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);

      }

      else{

        printf("%d\n%d\n", c, a);
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);

      }

    }

    else{

      printf("%d\n", c);

      if(a < b){

        printf("%d\n%d\n", a, b);
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);

      }

      else{

        printf("%d\n%d\n", b, a);
        printf("\n");
        printf("%d\n%d\n%d\n", a, b, c);

      }
    }

  }

  return 0;
}