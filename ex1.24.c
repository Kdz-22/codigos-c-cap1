#include <stdio.h>
#include <stdlib.h>

int main(void){  

float valorhoraAula;
int qtdaula;
float inss;
float salarioliquido;
float salariobruto;
float descontoinss;


printf("Valor da hora/aula: ");
scanf("%f", &valorhoraAula);

printf("Quantidade de aulas: ");
scanf("%d", &qtdaula);

printf("Porcentagem de desconto do INSS: ");
scanf("%f", &inss);

salariobruto = valorhoraAula * qtdaula ; 
descontoinss = salariobruto * 0.735;

printf("Salario Liquido: %.2f", descontoinss );

return 0;
} 