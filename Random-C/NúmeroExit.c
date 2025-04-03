#include <stdio.h>

int main() {

int num = 0;

do {
    printf("Digite um numero: ");
    scanf("%i", &num);
}while (num != 0);

printf("Programa encerrado.");

return 0;
}
