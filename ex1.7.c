#include <stdio.h>
#include <stdlib.h>

int main(void){

// n1 vai ser o valor do lado
    int lado;
    int Perimetro;
    int Area;

printf("Valor do lado: ");
scanf("%d", &lado);

Perimetro = 4 * lado;
Area = lado * lado;

printf("Perimetro = %d\n", Perimetro );
printf("Area = %d", Area );

return 0;
}
