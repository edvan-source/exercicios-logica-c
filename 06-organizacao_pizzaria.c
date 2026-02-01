#include <stdio.h>

void mostrarMesa(int pedidos[], int total) {
    for (int k = 0; k < total; k++) {
        printf("[%d] ", pedidos[k]);
    }
    printf("\n");
}

int main() {
    int pedidos[] = {5, 2, 4, 6, 1, 3};
    int totalDePedidos = 6;

    printf("--- MESA BAGUNCADA: ---\n");
    mostrarMesa(pedidos, totalDePedidos);

    for (int posicaoAtual = 1; posicaoAtual < totalDePedidos; posicaoAtual++) {
        int ticketNaMao = pedidos[posicaoAtual];
        int vizinhoEsquerda = posicaoAtual - 1;

        while (vizinhoEsquerda >= 0 && pedidos[vizinhoEsquerda] > ticketNaMao) {
            pedidos[vizinhoEsquerda + 1] = pedidos[vizinhoEsquerda];
            vizinhoEsquerda = vizinhoEsquerda - 1;
        }
        pedidos[vizinhoEsquerda + 1] = ticketNaMao;
    }

    printf("\n--- TUDO ORGANIZADO: ---\n");
    mostrarMesa(pedidos, totalDePedidos);

    return 0;
}
