#include <stdio.h>

float converterParaF(float graus) {
    return graus * 1.8f + 32.0f;
}

int main(void) {
    float c;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);

    printf("Temperatura em Fahrenheit: %.2f\n", converterParaF(c));

    return 0;
}
