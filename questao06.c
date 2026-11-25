#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}

float subtrair(float a, float b) {
    return a - b;
}

float multiplicar(float a, float b) {
    return a * b;
}

float dividir(float a, float b) {
    return a / b;
}

int main() {
    float numero1, numero2, resultado;
    int opcao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &numero1, &numero2);

    printf("\n1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma operacao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = somar(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrair(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicar(numero1, numero2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (numero2 != 0) {
                resultado = dividir(numero1, numero2);
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Nao e possivel dividir por zero.\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
