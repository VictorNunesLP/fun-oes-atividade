#include <stdio.h>

#define ALUNOS 10
#define NOTA_MINIMA 7.0f

void analisarTurma(const float notas[], int n,
                   float *media, float *maior, int *aprovados) {
    float soma = 0;
    int k;

    *maior = notas[0];
    *aprovados = 0;

    for (k = 0; k < n; k++) {
        soma += notas[k];

        if (notas[k] > *maior) {
            *maior = notas[k];
        }
        if (notas[k] >= NOTA_MINIMA) {
            (*aprovados)++;
        }
    }

    *media = soma / n;
}

void mostrarRelatorio(float media, float maior, int aprovados) {
    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Quantidade de aprovados: %d\n", aprovados);
}

int main(void) {
    float notas[ALUNOS];
    float media, maior;
    int aprovados, aluno;

    for (aluno = 0; aluno < ALUNOS; aluno++) {
        printf("Digite a nota do aluno %d: ", aluno + 1);
        scanf("%f", &notas[aluno]);
    }

    analisarTurma(notas, ALUNOS, &media, &maior, &aprovados);
    mostrarRelatorio(media, maior, aprovados);

    return 0;
}
