#include <stdio.h>
#include <stdlib.h>



int main(){


int idade;

printf("Digite a sua idade:");
scanf("%d", &idade);

if (idade >= 18)
{
  printf("Acesso permitido.");
} else {
  printf("Acesso negado.");
}




return 0;
}

