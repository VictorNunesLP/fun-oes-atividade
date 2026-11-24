#include <stdio.h>

int operar(float x, float y, int codigo, float *saida) {
    switch (codigo) {
        case 1:
            *saida = x + y;
            return 1;
        case 2:
            *saida = x - y;
            return 1;
        case 3:
            *saida = x * y;
            return 1;
        case 4:
            if (y == 0) {
                return -1;
            }
            *saida = x / y;
            return 1;
        default:
            return 0;
    }
}

int main(void) {
    float x, y, valor = 0;
    int escolha, status;

    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);

    printf("\n1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma operacao: ");
    scanf("%d", &escolha);

    status = operar(x, y, escolha, &valor);

    if (status == 1) {
        printf("Resultado: %.2f\n", valor);
    } else if (status == -1) {
        puts("Nao e possivel dividir por zero.");
    } else {
        puts("Opcao invalida.");
    }

    return 0;
}
