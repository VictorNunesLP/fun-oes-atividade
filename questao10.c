#include <stdio.h>

#define DIAS 5

float somarVendas(const float v[], int n) {
    float acumulado = 0;
    int k;

    for (k = 0; k < n; k++) {
        acumulado += v[k];
    }

    return acumulado;
}

int contarMaioresQue(const float v[], int n, float limite) {
    int k, qtd = 0;

    for (k = 0; k < n; k++) {
        if (v[k] > limite) {
            qtd++;
        }
    }

    return qtd;
}

int main(void) {
    float vendas[DIAS];
    float soma, media;
    int dia;

    for (dia = 0; dia < DIAS; dia++) {
        printf("Digite o valor da venda do dia %d: ", dia + 1);
        scanf("%f", &vendas[dia]);
    }

    soma = somarVendas(vendas, DIAS);
    media = soma / DIAS;

    printf("\nTotal vendido: R$ %.2f\n", soma);
    printf("Media diaria: R$ %.2f\n", media);
    printf("Dias com vendas acima da media: %d\n",
           contarMaioresQue(vendas, DIAS, media));

    return 0;
}
