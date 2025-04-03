#include<stdio.h>

int main () {

    float nota1;
    float nota2;
    int faltas;
    int aulas = 120;

    printf("Primeira nota: ");
    scanf("%f", &nota1);

    printf("Segunda nota: ");
    scanf("%f", &nota2);

    float media = (nota1+nota2) / 2;
    printf("Sua media e: %.1f\n", media);

    printf("Numero de faltas: ");
    scanf("%i", &faltas);

    float porcentagem = (float)faltas / aulas * 100;
    float frequencia = 100 - porcentagem;
    printf("Sua frequencia de presenca e: %.2f%%\n", frequencia);

    if (media >= 6 && frequencia > 75) {
        printf("Voce foi aprovado");
    } else {
        printf("Voce foi reprovado");
    }

    return 0;
}
