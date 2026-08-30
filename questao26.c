#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float media_aritmetica, media_geometrica;

    printf("Digite tres numeros em ponto flutuante: ");
    scanf("%f %f %f", &a, &b, &c);

    media_aritmetica = (a + b + c) / 3.0;

    media_geometrica = pow(a * b * c, 1.0 / 3.0);

    printf("Media Aritmetica: %.2f\n", media_aritmetica);
    printf("Media Geometrica: %.2f\n", media_geometrica);

    return 0;
}