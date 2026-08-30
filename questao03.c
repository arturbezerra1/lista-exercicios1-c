#include <stdio.h>
int main () {
int x;

printf("Escreva um numero:");
scanf("%d", &x);

printf("Triplo do numero: %d\n", x*3);
printf("Quadrado do numero: %d\n", x*x);
printf("Metade do numero: %d\n", x/2);

return 0;
}