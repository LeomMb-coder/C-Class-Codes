#include <stdio.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "");
int numero;

printf("Digite um n�mero de 1 ate 7: ");
scanf("%i", &numero);

switch (numero)
{
    case 1:
        printf("Voc� escolheu: domingo.");
        break;
    case 2:
        printf("Voc� escolheu: Segunda-Feira.");
        break;
    case 3:
        printf("Voc� escolheu: Terca-Feira.");
        break;
    case 4:
        printf("Voc� escolheu: Quarta-Feira.");
        break;
    case 5:
        printf("Voc� escolheu: Quinta-Feira.");
        break;
    case 6:
        printf("Voc� escolheu: Sexta-Feira.");
        break;
    case 7:
        printf("Voc� escolheu: S�bado.");
        break;
    default:
        printf("N�mero Inv�ido.");
}

return 0;
}
