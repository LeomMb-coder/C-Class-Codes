#include <stdio.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "");
int numero;

printf("Digite um número de 1 ate 7: ");
scanf("%i", &numero);

switch (numero)
{
    case 1:
        printf("Você escolheu: domingo.");
        break;
    case 2:
        printf("Você escolheu: Segunda-Feira.");
        break;
    case 3:
        printf("Você escolheu: Terca-Feira.");
        break;
    case 4:
        printf("Você escolheu: Quarta-Feira.");
        break;
    case 5:
        printf("Você escolheu: Quinta-Feira.");
        break;
    case 6:
        printf("Você escolheu: Sexta-Feira.");
        break;
    case 7:
        printf("Você escolheu: Sábado.");
        break;
    default:
        printf("Número Inváido.");
}

return 0;
}
