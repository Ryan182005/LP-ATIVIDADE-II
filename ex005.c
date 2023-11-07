#include <stdio.h>
#include <stdlib.h>



int main(){

int escolha;

printf("Digite o seu idioma de preferencia- \n1- Ingles\n2-Espanhol\n3-Frances\n");
scanf("%d", &escolha);

switch (escolha)
{
case 1:
  printf("Welcome.");
  break;
case 2:
  printf("Bienvenido.");
  break;
case 3:
  printf("Accueillir.");
  break;
default:
  printf("Opção indisponivel.")
  break;
}


return 0;
}

