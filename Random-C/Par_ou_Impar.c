#include<stdio.h>
#include<locale.h>

int main () {
    setlocale(LC_ALL, "");

    int numero;
    printf("Digite um número para descobrir se é par ou impar: ");

    scanf("%i", &numero);

    if ((numero % 2) > 0) {
        printf("Numero impar.");
    } else {
        printf("Numero par.");
    }

    return 0;
}
