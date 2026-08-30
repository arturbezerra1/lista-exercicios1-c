#include <stdio.h>

int main() {
    float cotacao, reais, dolares;

    printf("Digite a cotacao do dolar: ");
    scanf("%f", &cotacao);

    printf("Digite a quantidade de reais: ");
    scanf("%f", &reais);

    dolares = reais / cotacao;

    printf("Valor convertido: US$ %.2f\n", dolares);

    return 0;
}