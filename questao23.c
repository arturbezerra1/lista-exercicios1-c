#include <stdio.h>

int main() {
    int x, n, resultado;

    printf("Digite um valor inteiro:");
    scanf("%d", &x);

   printf("Digite a potencia de 2 (n): ");
   scanf("%d", &n);

 resultado = x << n;

   printf("Resultado de %d * 2^%d: %d\n", x, n, resultado);

   return 0;
}