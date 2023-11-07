#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(){


float valor, preco = 0;
char  resposta; 
float valorF = 0;


printf("Digite o valor da sua compra: ");
scanf("%f", &valor);

fflush(stdin);

printf("Essa compra esta sendo realizada em um fim de semana? ");
scanf("%s", &resposta);

system("cls || clear");

resposta = toupper(resposta);

switch (resposta)
{
case 'S':
  preco = 0.15 * valor;
  valorF = valor - preco;
  printf("O seu desconto e de: %.2fR$ \n", preco);
  printf("O preco final da sua compra e de: %.2fR$", valorF);
  break;
case 'N':
  preco = 0.1 * valor;
  valorF = valor - preco;
  printf("O seu desconto e de: %.2fR$ \n", preco);
  printf("O preco final da sua compra e de: %.2fR$", valorF);
  break;
default:
  break;
}


return 0;
}
