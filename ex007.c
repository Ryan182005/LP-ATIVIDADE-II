#include <stdio.h>
#include <stdlib.h>



int main(){

int escolha;

printf("Menu\n1-Novo jogo\n2-Carregar jogo\n3-Configuracoes\n");
scanf("%d", &escolha);

system("cls || clear");


switch (escolha)
{
case 1:
  printf("Iniciando um novo jogo.");
  break;
case 2:
  printf("Escolha uma das opcoes\nJogo Salvo 1\n Jogo Salvo 2\n Jogo Salvo 3");
  break;
case 3:
  printf("Ajuste de resolucao\nAjuste de volume\nAjuste de contraste.");
default:
  break;
}

return 0;
}
