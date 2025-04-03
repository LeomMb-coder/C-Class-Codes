#include<stdio.h>

int main() {

int tempo_servico;
float salario;
float bonus;

printf("Digite seu tempo de servico: ");
scanf("%i", &tempo_servico);
printf("Digite seu salario: R$ ");
scanf("%f", &salario);

if (tempo_servico <= 3) {
    printf("Seu salario e R$ %.2f, e voce nao recebeu bonus.", salario);
} else if (tempo_servico >= 4 && tempo_servico <= 7) {
    salario = salario + 35.99;
    printf("Seu salario final e R$ %.2f, voce recebeu um bonus de R$35,99.", salario);
} else if (tempo_servico > 7) {
    salario = salario + 45.99;
    printf("Seu salario final e R$ %.2f, voce recebeu um bonus de R$45,99.", salario);
}

return 0;
}
