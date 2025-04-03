#include <stdio.h>

int main() {

int idade;

printf("Bem vindo ao algoritimo de idade\n");
printf("Insira sua idade: ");
scanf("%i", &idade);

if (idade >= 18) {
    printf("Voce e maior de idade");
} else {
    printf("Voce e menor de idade");
}

return 0;
}
