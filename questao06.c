#include <stdio.h>
int main () {
    int hora, minutos, segundos;

    printf("Digite as horas:");
    scanf("%d", &hora);

    printf("Digite os minutos:");
    scanf("%d", &minutos);

    printf("Digite os segundos:");
    scanf("%d", &segundos);

    printf("Os segundos totais sao: %d\n", (3600*hora)+(60*minutos)+segundos);

    return 0;
}