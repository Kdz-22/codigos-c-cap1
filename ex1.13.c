#include <stdio.h>
#include <stdlib.h>

int main(void){  


float n1;
float n2;

float adicao;
float subtracao;
float multiplicacao;
float divisao;

printf("Primeiro numero: ");
scanf("%f", &n1);

printf("Segundo numero: ");
scanf("%f", &n2);

adicao = n1 + n2;
subtracao = n1 - n2;
multiplicacao = n1 * n2;
divisao = n1 / n2;

printf("%.2f + %.2f = %.2f\n", n1, n2, adicao );
printf("%.2f - %.2f = %.2f\n", n1, n2, subtracao );
printf("%.2f * %.2f = %.2f\n", n1, n2, multiplicacao );
printf("%.2f / %.2f = %.2f\n", n1, n2, divisao );



return 0;
}  
