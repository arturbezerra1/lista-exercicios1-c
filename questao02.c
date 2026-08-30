#include <stdio.h>
int main () {
float valor;

printf("Escreva um valor real:");
scanf("%f", &valor);

printf("Valor com uma casa decimal: %.1f\n", valor);

return 0;
}