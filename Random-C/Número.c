#include <stdio.h>

int main () {

int limite;
int num;

printf("Qual sera o numero de inicio: ");
scanf("%i", &num);

printf("Ate qual sera o limite do numero: ");
scanf("%i", &limite);

for (;num<=limite; num++) {
    printf("%i\n", num);
}

return 0;
}
