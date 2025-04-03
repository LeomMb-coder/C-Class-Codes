#include <stdio.h>

int main()
{
    // Fazer o algoritimo avaliando se aluno está aprovado
    //Deve ter a nota igual ou maior que 6

    int nota1;
    int nota2;

    printf("Bem vindo ao algoritimo gerenciador de nota\n");
    printf("Insira sua primeira nota: ");
    scanf("%i", &nota1);
    printf("Insira sua segunda nota: ");
    scanf("%i", &nota2);

    float media = (nota1 + nota2) / 2;

    printf("Sua media e %.1f\n", media);
    if (media >= 6) {
        printf("Voce foi aprovado");
    } else {
        printf("Voce foi reprovado");
    }

    return 0;
}
