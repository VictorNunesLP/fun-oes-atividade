#include <stdio.h>

int escolherMaior(int x, int y) {
    return (x > y) ? x : y;
}

int main(void) {
    int a, b;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    printf("O maior numero e: %d\n", escolherMaior(a, b));

    return 0;
}
