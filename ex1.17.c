#include <stdio.h>
#include <stdlib.h>

int main(void){   

float basemenor;
float basemaior;
float altura;
float area;

printf("Valor da base maior: ");
scanf("%f", &basemaior);

printf("Valor da base menor: ");
scanf("%f", &basemenor);

printf("Valor da altura: ");
scanf("%f", &altura);

area = (basemaior + basemenor) * altura / 2 ;

printf("Area = %.2f", area);



return 0;
}