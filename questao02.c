#include <stdio.h>

int dobrar(int valor) {
    return valor + valor;
}

int main(void) {
    int entrada;

    printf("Digite um numero: ");
    scanf("%d", &entrada);

    printf("O dobro e: %d\n", dobrar(entrada));

    return 0;
}
