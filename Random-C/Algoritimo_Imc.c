#include <stdio.h>

int main() {

float peso;
float altura;

printf("Bem vindo ao algoritimo de IMC\n");
printf("Insira seu peso: ");
scanf("%f", &peso);
printf("Insira sua altura: ");
scanf("%f", &altura);

float imc = peso / (altura*altura);

printf("Seu indice de massa corporal e: %.2f\n", imc);

if (imc <= 18.5) {
    printf("Baixo peso com IMC %.2f", imc);
} else if (imc >=18. && imc <-24.99) {
    printf("Normal com IMC %.2f", imc);
} else if (imc >= 25 && imc <= 29.99) {
    printf("Sobrepeso com IMC %.2f", imc);
}else if (imc >= 30) {
    printf("Obesidade %.2f", imc);
}

return 0;
}
