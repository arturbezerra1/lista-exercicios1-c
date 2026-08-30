#include <stdio.h>

int main() {
    float valor_hora, horas_trabalhadas, percentual_inss;
    float salario_bruto, desconto_inss, salario_liquido;

    printf("Digite o valor da hora aula: ");
    scanf("%f", &valor_hora);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    printf("Digite o percentual de desconto do INSS: ");
    scanf("%f", &percentual_inss);


    salario_bruto = valor_hora * horas_trabalhadas;
    desconto_inss = salario_bruto * (percentual_inss / 100.0);
    salario_liquido = salario_bruto - desconto_inss;

    printf("\n--- Resulta do Calculo ---\n");
    printf("Salario Bruto: %.2f\n", salario_bruto);
    printf("Desconto INSS: %.2f\n", desconto_inss);
    printf("Salario Liquido: %.2f\n", salario_liquido);

    return 0;
}