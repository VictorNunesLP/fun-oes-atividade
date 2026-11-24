#include <stdio.h>

#define PRODUTOS 8
#define LIMITE_BAIXO 5

int somarUnidades(const int itens[], int n) {
    int k, soma = 0;

    for (k = 0; k < n; k++) {
        soma += itens[k];
    }

    return soma;
}

int quantosEmFalta(const int itens[], int n) {
    int k, qtd = 0;

    for (k = 0; k < n; k++) {
        if (itens[k] < LIMITE_BAIXO) {
            qtd++;
        }
    }

    return qtd;
}

int localizar(int n, int codigo) {
    if (codigo < 1 || codigo > n) {
        return -1;
    }
    return codigo - 1;
}

int main(void) {
    int itens[PRODUTOS];
    int k, codigo, indice;

    for (k = 0; k < PRODUTOS; k++) {
        printf("Digite a quantidade do produto %d: ", k + 1);
        scanf("%d", &itens[k]);
    }

    printf("\nTotal de unidades no estoque: %d\n",
           somarUnidades(itens, PRODUTOS));
    printf("Produtos com menos de 5 unidades: %d\n",
           quantosEmFalta(itens, PRODUTOS));

    printf("\nDigite o codigo do produto que deseja buscar (1 a 8): ");
    scanf("%d", &codigo);

    indice = localizar(PRODUTOS, codigo);

    if (indice >= 0) {
        printf("Produto encontrado na posicao %d. Quantidade: %d\n",
               indice, itens[indice]);
    } else {
        puts("Produto nao encontrado.");
    }

    return 0;
}
