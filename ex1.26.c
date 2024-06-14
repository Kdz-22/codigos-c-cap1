#include <stdio.h>
#include <stdlib.h>

int main(void){   

float tempc;
float tempf;

printf("Temperatura em graus Celsius: ");
scanf("%f", &tempc);

tempf = ( 1.8 * tempc ) + 32;

printf("%.2f graus Celsius correspondem a %.2f graus Fahrenheit", tempc, tempf );



return 0;
}