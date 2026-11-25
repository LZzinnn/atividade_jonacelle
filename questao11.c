#include <stdio.h>

float calcularMediaTurma(float notas[], int quantidade) {
    int i;
    float soma = 0;

    for (i = 0; i < quantidade; i++) {
        soma = soma + notas[i];
    }

    return soma / quantidade;
}

float encontrarMaiorNota(float notas[], int quantidade) {
    int i;
    float maior = notas[0];

    for (i = 1; i < quantidade; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }

    return maior;
}

int contarAprovados(float notas[], int quantidade) {
    int i, aprovados = 0;

    for (i = 0; i < quantidade; i++) {
        if (notas[i] >= 7.0) {
            aprovados++;
        }
    }

    return aprovados;
}

void exibirResultados(float media, float maiorNota, int aprovados) {
    printf("\nMedia da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Quantidade de aprovados: %d\n", aprovados);
}

int main() {
    float notas[10], media, maiorNota;
    int i, aprovados;

    for (i = 0; i < 10; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    media = calcularMediaTurma(notas, 10);
    maiorNota = encontrarMaiorNota(notas, 10);
    aprovados = contarAprovados(notas, 10);

    exibirResultados(media, maiorNota, aprovados);

    return 0;
}
