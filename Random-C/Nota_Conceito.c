#include<stdio.h>

int main () {

int nota1;
int nota2;

printf("Primeira Nota: ");
scanf("%i", &nota1);
printf("Segunda Nota: ");
scanf("%i", &nota2);
int media = (nota1 + nota2) / 2;

printf("Sua media e: %i\n", media);

switch (media) {
    case 10:
        printf("A+ Exelente!");
        break;
    case 9:
        printf("A Excelente.");
        break;
    case 8:
        printf("B Bom!");
        break;
    case 7:
        printf("B- Bom.");
        break;
    case 6:
        printf("C Regular.");
        break;
    case 5:
        printf("D Ruim!Precisa Melhorar.");
        break;
    case 4:
        printf("D- Ruim!");
        break;
    default:
        printf("Reprovado!");
    }
return 0;
}


