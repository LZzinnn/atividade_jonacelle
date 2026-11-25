#include <stdio.h>

int maiorNumero(int numero1, int numero2) {
    if (numero1 > numero2) {
        return numero1;
    } else {
        return numero2;
    }
}

int main() {
    int numero1, numero2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero1, &numero2);

    printf("O maior numero e: %d\n", maiorNumero(numero1, numero2));

    return 0;
}
