#include<stdio.h>

int main () {

int opcao;

printf("Digite 1 para Cadastrar;\n");
printf("Digite 2 para Listar;\n");
printf("Digite 3 para Sair;\n");
printf("Escolha uma opcao: ");
scanf("%i", &opcao);

switch (opcao) {
case 1:
    printf("Voce escolheu cadastrar.");
    break;
case 2:
    printf("Voce escolheu Listar.");
    break;
case 3:
    printf("Voce escolheu Sair.");
    break;
default:
    printf("Numero invalido.");
}


return 0;
}
