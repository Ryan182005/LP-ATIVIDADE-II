#include <stdio.h>
#include <stdlib.h>



int main(){

int temperatura;

printf("Digite a temperatura em graus celsius:");
scanf("%d", &temperatura);

if (temperatura > 25)
{
  printf("O clima sera ensolarado.");
} else if (temperatura < 15)
{
  printf("O clima sera chuvoso.");
} else
{
  printf("O clima sera nublado.");
}





return 0;
}
