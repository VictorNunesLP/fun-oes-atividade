#include <stdio.h>

void imprimirTabuada(int base) {
    int fator = 1;

    while (fator <= 10) {
        printf("%d x %d = %d\n", base, fator, base * fator);
        fator++;
    }
}

int main(void) {
    int n;

    printf("Digite um numero: ");
    scanf("%d", &n);

    imprimirTabuada(n);

    return 0;
}
