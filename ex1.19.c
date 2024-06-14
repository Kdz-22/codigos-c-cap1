#include <stdio.h>
#include <stdlib.h>

int main(){   

float raio;
float diametro;
float circunferencia;
float area;

printf("Valor do raio do circulo: ");
scanf("%f", &raio);

diametro = raio + raio;
circunferencia = 2 * 3.141592 * raio;
area = 3.141592 * raio * raio;

printf("Diametro = %.2f\n", diametro);
printf("Circunferencia = %.2f\n", circunferencia);
printf("Area = %.2f", area);

return 0;
}