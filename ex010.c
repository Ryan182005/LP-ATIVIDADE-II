#include <stdio.h>
#include <stdlib.h>



int main(){

int numero1, numero2, escolha, valorF;


printf("Digite o primerio numero:");
scanf("%d", &numero1);
printf("Digite o segundo numero:");
scanf("%d", &numero2);

printf("Qual operacao voce deseja realizar\n1- +\n2- -\n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
  valorF = numero1 + numero2;
printf("Valor final: %d", valorF);
  break;
case 2:
  valorF = numero1 - numero2;
printf("Valor final: %d", valorF);
break;
default:
  break;
}


return 0;
}

