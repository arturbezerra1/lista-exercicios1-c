#include <stdio.h>

int main() {
    int dias; 
    float diario = 50.25;
    float bruto, gratificacao, imposto, liquido;

    printf("Digite os dias trabalhados");
    scanf("%d", &dias);

    bruto = diario * dias;

    if(dias > 20) {
        gratificacao = bruto * 0.30;
    } else if(10 < dias <= 20) {
        gratificacao = bruto * 0.20;
    } 
    imposto = bruto * 0.10;
    liquido = bruto + gratificacao - imposto;

    printf("Valor bruto: %.2f\n", bruto);
    printf("Gratificacao: %.2f\n", gratificacao);
    printf("Imposto: %.2f\n", imposto);
    printf("Valor liquido a receber: %.2f\n", liquido);

    return 0;
}