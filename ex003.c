#include <stdio.h>
#include <stdlib.h>



int main(){

float nota;

printf("Digite a sua nota: ");
scanf("%f", &nota);

if (nota >= 9)
{
  printf("Excelente.");
} else if (nota >= 7)
{
  printf("Bom.");
} else if (nota >= 5)
{
  printf("Razoavel.");
} else
{
  printf("Insuficiente.");
}





return 0;
}

