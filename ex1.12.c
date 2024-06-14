#include <stdio.h>
#include <stdlib.h>

int main(void){   

float valorqualquer;

printf("entre com valor qualquer: ");
scanf("%f", &valorqualquer);

printf("%f\n", valorqualquer);
printf("%.2f\n", valorqualquer);
printf("%.3f", valorqualquer);

return 0;
}