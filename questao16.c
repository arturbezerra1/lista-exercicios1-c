#include <stdio.h>

int main() {
    int x, absoluto;

    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    
    absoluto = (x < 0) ? -x : x;

    printf("Valor absoluto: %d\n", absoluto);

    return 0;
}