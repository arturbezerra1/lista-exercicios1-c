#include <stdio.h>
int main () {
float altura, peso;
char sexo;

printf("Digite sua altura:");
scanf("%f", &altura);

printf("Digite M para masculino e F para feminino:");
scanf(" %c", &sexo);

if (sexo == 'M' || sexo == 'm') {
printf("O peso ideal para homens: %.2f kg\n", (72.7 * altura)- 58);
} else if (sexo == 'F' || sexo == 'f') {
    printf("O peso ideal para mulheres: %.2f kg\n", (62.1 * altura)- 44.7);
} else {
    printf("Opção de sexo inválida\n");
}

return 0;
}