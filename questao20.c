#include <stdio.h>
int main () {
int a, b;

printf("Digite um valor inteiro:");
scanf("%d", &a);

printf("Digite mais um valor inteiro:");
scanf("%d", &b);

printf("Resultado: %s\n", (a % b == 0) ? "Multiplo" : "Nao e multiplo" );

return 0;
}