#include <stdio.h>

#define QTD_NOTAS 3

float mediaDasNotas(const float v[], int n) {
    float soma = 0;
    int k;

    for (k = 0; k < n; k++) {
        soma += v[k];
    }

    return soma / n;
}

const char *classificar(float media) {
    return (media >= 7.0f) ? "Aluno aprovado!" : "Aluno reprovado!";
}

int main(void) {
    float notas[QTD_NOTAS];
    float media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &notas[0], &notas[1], &notas[2]);

    media = mediaDasNotas(notas, QTD_NOTAS);

    printf("Media: %.2f\n", media);
    puts(classificar(media));

    return 0;
}
