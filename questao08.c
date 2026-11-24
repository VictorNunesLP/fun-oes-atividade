#include <stdio.h>

int verificarPrimo(int n) {
    int d;

    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }

    d = 3;
    while (d * d <= n) {
        if (n % d == 0) {
            return 0;
        }
        d += 2;
    }

    return 1;
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (verificarPrimo(valor)) {
        puts("O numero e primo.");
    } else {
        puts("O numero nao e primo.");
    }

    return 0;
}
