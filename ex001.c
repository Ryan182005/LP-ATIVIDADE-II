#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
setlocale(LC_ALL, "portuguese");

int temperatura;

printf("Digite a temperatura em graus celsius:");
scanf("%d", &temperatura);

if (temperatura > 25)
{
  printf("O clima ser� ensolarado.");
} else if (temperatura < 15)
{
  printf("O clima ser� chuvoso.");
} else
{
  printf("O clima ser� nublado.");
}





return 0;
}
