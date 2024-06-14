#include <stdio.h>
#include <stdlib.h>

int main(void){

// n1 vai ser o valor do lado
    float lado;
    float Perimetro;
    float Area;

printf("Valor do lado: ");
scanf("%f", &lado);

Perimetro = 4 * lado;
Area = lado * lado;

printf("Perimetro = %.2f\n", Perimetro );
printf("Area = %.2f", Area );

return 0;
}