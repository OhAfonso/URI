#include <stdio.h>

int main(void) {
  
  int valorDinheiro, cedula100, cedula50, cedula20, cedula10, cedula05, cedula02, valorMoeda, moeda1, moeda050, moeda025, moeda010, moeda05, moeda01;
  double valor;

  scanf("%lf", &valor);

  //Conversão
  valorDinheiro = (int)valor;
  valor -= valorDinheiro;
  valorMoeda = (valor * 100);

  //Cédula
  cedula100 = valorDinheiro / 100;
  valorDinheiro = valorDinheiro % 100;

  cedula50 = valorDinheiro / 50;
  valorDinheiro = valorDinheiro % 50;

  cedula20 = valorDinheiro / 20;
  valorDinheiro = valorDinheiro % 20;

  cedula10 = valorDinheiro / 10;
  valorDinheiro = valorDinheiro % 10;

  cedula05 = valorDinheiro / 5;
  valorDinheiro = valorDinheiro % 5;

  cedula02 = valorDinheiro / 2;
  valorDinheiro = valorDinheiro % 2;

  //Moeda
  moeda1 = valorDinheiro;


  moeda050 = valorMoeda / 50;
  valorMoeda = valorMoeda % 50;

  moeda025 = valorMoeda / 25;
  valorMoeda = valorMoeda % 25;

  moeda010 = valorMoeda / 10;
  valorMoeda = valorMoeda % 10;

  moeda05 = valorMoeda / 5;
  valorMoeda = valorMoeda % 5;

  moeda01 = valorMoeda / 1;
  valorMoeda = valorMoeda % 1;

  printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", cedula100, cedula50, cedula20, cedula10, cedula05, cedula02, moeda1, moeda050, moeda025, moeda010, moeda05, moeda01);


  return 0;
}
