#include <stdio.h>
#include <stdlib.h>

int main(void){

int diagonalmaior;
int diagonalmenor;
int area;

printf("Valor da diagonal maior: ");
scanf("%d", &diagonalmaior);

printf("Valor da diagonal menor: ");
scanf("%d", &diagonalmenor);

area = diagonalmaior * diagonalmenor / 2;

printf("Area = %d", area);

return 0;
}