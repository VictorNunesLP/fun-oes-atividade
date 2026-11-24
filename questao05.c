#include <stdio.h>

int divisivelPorDois(int n) {
    return (n % 2 == 0);
}

int main(void) {
    int valor;

    printf("Digite um numero: ");
    scanf("%d", &valor);

    if (divisivelPorDois(valor)) {
        puts("O numero e par.");
    } else {
        puts("O numero e impar.");
    }

    return 0;
}
