#include <stdio.h>
int main () {
    int x;
    printf("Digite um numero inteiro:");
    scanf("%d", &x);

printf("Verificacao: %s\n", (x % 2 == 0) ? "Par" : "Impar");
}