#include <stdio.h>

int main() {

int n1;
int n2;

printf("Bem vindo ao algoritimo de notas em letras\n");
printf("Insira sua primeira nota: ");
scanf("%i", &n1);
printf("Insira sua segunda nota: ");
scanf("%i", &n2);
float media = (n1 + n2) / 2;
printf("Sua media e: %.2f\n", media);

if (media < 40) {
    printf("Nota final: E");
} else if (media >= 40 && media < 60) {
    printf("Nota final: D");
} else if (media >= 60 && media < 80) {
    printf("Nota final: C");
} else if (media >= 80 && media < 95) {
    printf("Nota final: B");
} else if (media >= 95) {
    printf("Nota final: A");
}

return 0;
}
