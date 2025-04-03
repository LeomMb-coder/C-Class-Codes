#include <stdio.h>

int main() {
    int i, j, espacos, linhas = 5;

    for (i = 1; i <= linhas; i++) {

        for (espacos = 1; espacos <= linhas - i; espacos++) {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++) {
            printf("^");
        }
        printf("\n");
    }

    return 0;
}
