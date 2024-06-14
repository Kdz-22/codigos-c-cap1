#include <stdio.h>
#include <stdlib.h>

int main(void){

int largura;
int altura;

int area;
int perimetro;

printf("Valor da largura: ");
scanf("%d", &largura);

printf("Valor da altura: ");
scanf("%d", &altura);

perimetro = largura + largura + altura + altura;
area = largura * altura;

printf("Perimetro = %d\n", perimetro );
printf("Area = %d\n", area );


    return 0;
}