#include <stdio.h>
#include <stdlib.h>



int main(){

int codigo = 909030;
int cod;



do
{
  printf("Digite o codigo: ");
  scanf("%d", &cod);
if (cod == codigo)
{
printf("Autorizado.");
} else{
  printf("Nao autorizado, digite o codigo novamente. \n");
}
} while (cod != codigo);



return 0;
}
