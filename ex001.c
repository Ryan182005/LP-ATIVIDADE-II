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
  printf("O clima será ensolarado.");
} else if (temperatura < 15)
{
  printf("O clima será chuvoso.");
} else
{
  printf("O clima será nublado.");
}





return 0;
}
