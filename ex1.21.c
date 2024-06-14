#include <stdio.h>
#include <stdlib.h>

int main(void){   

int n1;
int sucessor;
int antecessor;

printf("Forneca um numero inteiro: ");
scanf("%d", &n1);

sucessor =  n1 + 1;
antecessor = n1 - 1;

printf("Sucessor de %d: %d\n", n1, sucessor);
printf("Antecessor de %d: %d", n1, antecessor);

return 0;
}