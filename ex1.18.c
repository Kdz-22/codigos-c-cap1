#include <stdio.h>
#include <stdlib.h>

int main(void){

float diagonalmaior;
float diagonalmenor;
float area;

printf("Valor da diagonal maior: ");
scanf("%f", &diagonalmaior);

printf("Valor da diagonal menor: ");
scanf("%f", &diagonalmenor);

area = diagonalmaior * diagonalmenor / 2;

printf("Area = %.2f", area);


return 0;
}   