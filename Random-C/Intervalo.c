#include<stdio.h>

int main() {

int numero;

printf("Digite um numero para saber se ele esta entre 10 e 50: ");
scanf("%i", &numero);

if (numero >= 10 && numero <= 50) {
    printf("%i esta entre 10 e 50.", numero);
} else {
    printf("%i nao esta entre 10 e 50.", numero);
}

return 0;
}
