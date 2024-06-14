#include <stdio.h>
#include <stdlib.h>

int main(void){   
    
float largura;
float altura;

float perimetro;
float area;

printf("Valor da largura: ");
scanf("%f", &largura);

printf("Valor da altura: ");
scanf("%f", &altura);

perimetro = largura + largura + altura + altura;
area = largura * altura;

printf("Perimetro = %.2f\n", perimetro );
printf("Area = %.2f", area );







return 0;
}
