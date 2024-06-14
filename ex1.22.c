#include <stdio.h>
#include <stdlib.h>

int main(void){   

float valorproduto;
float precovenda;
float desconto;

printf("Valor do produto: ");
scanf("%f", &valorproduto);

desconto = valorproduto * 0.91 ;

printf("Preco de venda com 9%% de desconto: %.2f", desconto);


return 0;
}