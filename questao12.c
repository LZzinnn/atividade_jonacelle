#include <stdio.h>

int calcularTotalEstoque(int estoque[], int quantidade) {
    int i, total = 0;

    for (i = 0; i < quantidade; i++) {
        total = total + estoque[i];
    }

    return total;
}

int contarEstoqueBaixo(int estoque[], int quantidade) {
    int i, contador = 0;

    for (i = 0; i < quantidade; i++) {
        if (estoque[i] < 5) {
            contador++;
        }
    }

    return contador;
}

int buscarProduto(int estoque[], int codigo) {
    if (codigo >= 1 && codigo <= 8) {
        return codigo - 1;
    } else {
        return -1;
    }
}

int main() {
    int estoque[8], i, codigo, posicao;

    for (i = 0; i < 8; i++) {
        printf("Digite a quantidade do produto %d: ", i + 1);
        scanf("%d", &estoque[i]);
    }

    printf("\nTotal de unidades no estoque: %d\n",
           calcularTotalEstoque(estoque, 8));

    printf("Produtos com menos de 5 unidades: %d\n",
           contarEstoqueBaixo(estoque, 8));

    printf("\nDigite o codigo do produto que deseja buscar (1 a 8): ");
    scanf("%d", &codigo);

    posicao = buscarProduto(estoque, codigo);

    if (posicao != -1) {
        printf("Produto encontrado na posicao %d. Quantidade: %d\n",
               posicao, estoque[posicao]);
    } else {
        printf("Produto nao encontrado.\n");
    }

    return 0;
}
