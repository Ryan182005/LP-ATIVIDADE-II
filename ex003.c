#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

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
  printf("Razoável.");
} else
{
  printf("Insuficiente.");
}





return 0;
}

