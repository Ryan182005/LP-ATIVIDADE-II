#include <stdio.h>
#include <stdlib.h>



int main(){

int escolha;

printf("Digite o codigo do produto:\n1-Camiseta\n2-Calca\n3-Sapato\n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
  printf("Produto selecionado: Camiseta \n");
  printf("Valor do produto: 25.00R$");
  break;
case 2:
  printf("Produto selecionado: Calca \n");
  printf("Valor do produto: 50.00R$");
  break;
case 3:
  printf("Produto selecionado: Sapato \n");
  printf("Valor do produto: 100.00R$");
  break;
default:
  break;
}



return 0;
}
