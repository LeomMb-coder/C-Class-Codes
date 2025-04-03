#include<stdio.h>

int main () {

int hora;
float preco;

printf("Quantas horas voce esta estacionado: ");
scanf("%i", &hora);

if (hora <=2) {
    preco = hora * 5;
    printf("O preco de estacionamento e: R$ %.2f", preco);
} else if (hora >= 3 && hora <= 5) {
    preco = hora *4;
    printf("O preco de estacionamento e: R$ %.2f", preco);
} else {
    preco = hora *3;
    printf("O preco de estacionamento e: R$ %.2f", preco);
}

return 0;
}
