#include <stdio.h>
int main () {
int x, sucessor, antecessor;

printf("Digite o valor:");
scanf("%d", &x);

sucessor= x + 1;
antecessor= x - 1;

printf("Seu sucessor: %d\n", sucessor);
printf("Seu antecessor: %d\n", antecessor);

return 0;
}