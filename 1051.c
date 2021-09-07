#include <stdio.h>

int main(void) {
  
  float salario, impostoRenda, resto1, resto2;

  scanf("%f", &salario);

  if(salario >= 0.0 && salario <= 2000.00){

    printf("Isento\n");

  }

  else if(salario >= 2000.01 && salario <= 3000.00){

    salario -= 2000.00;
    impostoRenda = salario * 0.08;

    printf("R$ %.2f\n", impostoRenda);

  }

  else if(salario >= 3000.01 && salario <= 4500.00){

    salario -= 2000.00; // 1002
    resto1 = salario - 1000; // 02
    salario -= resto1; // 1000

    impostoRenda = (salario * 0.08) + (resto1 * 0.18);

    printf("R$ %.2f\n", impostoRenda);

  }

  else if(salario >= 4500.00){
   
    salario -= 2000.00; // 2520
    resto1 = salario - 1000; // 1520
    resto2 = resto1 - 1500; //20 

    salario -= resto1; // 1000
    resto1 -= resto2; // 1500
    
    impostoRenda = (salario * 0.08) + (resto1 * 0.18) + (resto2 * 0.28);

    printf("R$ %.2f\n", impostoRenda);

  }


  return 0;
}
