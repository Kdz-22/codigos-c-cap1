#include <stdio.h>
#include <stdlib.h>

int main(void){ 

float tempf;
float tempc;

printf("Temperatura em graus Fahrenheit: ");
scanf("%f", &tempf);

tempc = (tempf - 32) / 1.8;

printf("%.2f graus Fahrenheit correspondem a %.2f graus Celsius", tempf, tempc);










return 0;
}  