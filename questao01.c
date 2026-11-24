#include <stdio.h>

void exibirBoasVindas(void) {
    puts("Bem-vindo ao mundo das funcoes em C!");
}

int main(void) {
    int vezes;

    for (vezes = 0; vezes < 3; vezes++) {
        exibirBoasVindas();
    }

    return 0;
}
