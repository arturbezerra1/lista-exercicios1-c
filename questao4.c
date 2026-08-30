#include <stdio.h>

int main() {
    float conta, taxa;

    printf("Valor da conta: ");
    scanf("%f", &conta);

    taxa = conta * 0.1;

    printf("Valor da conta com a taxa: %.2f\n", conta + taxa);

    return 0;
}