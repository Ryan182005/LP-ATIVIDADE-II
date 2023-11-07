#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>


int main(){
setlocale(LC_ALL, "portuguese");

float valor, preco = 0;
char  resposta; 
float valorF = 0;


printf("Digite o valor da sua compra: ");
scanf("%f", &valor);

fflush(stdin);

printf("Essa compra está sendo realizada em um fim de semana? ");
scanf("%s", &resposta);

system("cls || clear");

resposta = toupper(resposta);

switch (resposta)
{
case 'S':
  preco = 0.15 * valor;
  valorF = valor - preco;
  printf("O seu desconto é de: %.2fR$ \n", preco);
  printf("O preço final da sua compra é de: %.2fR$", valorF);
  break;
case 'N':
  preco = 0.1 * valor;
  valorF = valor - preco;
  printf("O seu desconto é de: %.2fR$ \n", preco);
  printf("O preço final da sua compra é de: %.2fR$", valorF);
default:
  break;
}


return 0;
}
