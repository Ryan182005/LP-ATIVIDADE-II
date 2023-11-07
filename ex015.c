#include <stdio.h>
#include <stdlib.h>



int main(){

float valor;
int escolha;
float valorF;

do
{
  printf("Digite um valor em metros: ");
  scanf("%f", &valor);

  printf("Escolha a operacao desejada:\n1-KM\n2-HM\n3-DAM\n4-DM\n5-CM\n6-MM\n");
  scanf("%d", &escolha);
  
  switch (escolha)
  {
  case 1:
    valorF = valor / 1000;
    printf("Valor em KM: %.2f", valorF);
    break;
  case 2:
    valorF = valor / 100;
    printf("Valor em HM: %.2f", valorF);
    break;
  case 3:
  valorF = valor / 10;
    printf("Valor em DAM: %.2f", valorF);
    break;
  case 4:
  valorF = valor * 10;
    printf("Valor em DM: %.f", valorF);
    break;
  case 5:
  valorF = valor * 100;
    printf("Valor em CM: %.f", valorF);
    break;
  case 6:
    valorF = valor * 1000;
    printf("Valor em MM: %.f", valorF);
    break;
  default:
    break;
  }

} while (valor = 0);





return 0;
}

