#include<stdio.h>
int main () {

float salario;
float salario_porcentagem;
float salario_final;

printf("Insira seu salario: ");
scanf("%f", &salario);

if (salario <= 1500) {
    salario = salario * 1.1;
    printf("Seu salario final e: R$ %.2f", salario);
} else if (salario > 1500 & salario <= 3000) {
    salario = salario * 1.07;
    printf("Seu salario final e: R$ %.2f", salario);
} else if (salario > 3000) {
    salario = salario * 1.05;
    printf("Seu salario final e: R$ %.2f", salario);
}

return 0;
}
