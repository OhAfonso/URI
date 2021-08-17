#include <stdio.h>

int main(void) {
  
  int idadeDias, ano, mes, dia;

  scanf("%d", &idadeDias);

  ano = idadeDias / 365;
  mes = (idadeDias % 365) / 30;
  dia = (idadeDias % 365) % 30;

  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

  return 0;
}