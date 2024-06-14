#include <stdio.h>
#include <stdlib.h>

int main(void){   

int anonascimento;
int anoatual;
int idade;

printf("Ano de nascimento: ");
scanf("%d", &anonascimento);

printf("Ano atual: ");
scanf("%d", &anoatual);

idade = anoatual - anonascimento;

printf("Idade aproximada: %d anos", idade);


return 0;
}