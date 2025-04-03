#include<stdio.h>

int main() {

int idade;

printf("Insira sua idade: ");
scanf("%i", &idade);

if (idade <= 12) {
    printf("Voce e crianca.");
} else if (idade >= 13 && idade <= 17) {
    printf("Voce e adolescente.");
} else if (idade >= 18 && idade <= 59) {
    printf("Voce e adulto.");
} else {
    printf("Voce e idoso.");
}

return 0;
}
