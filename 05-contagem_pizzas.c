#include <stdio.h>

/* Exercício: Lógica de Contagem de Pedidos
   Objetivo: Praticar o laço while
*/

int main() {
    int pizzasProntas = 0;
    int metaDoDia = 3;

    printf("--- INICIO DO TURNO ---\n");

    while (pizzasProntas < metaDoDia) {
        pizzasProntas++; // Aumenta a contagem
        printf("Sucesso! Pizza numero %d foi entregue.\n", pizzasProntas);
    }

    printf("--- META ATINGIDA: %d pizzas finalizadas! ---\n", pizzasProntas);

    return 0;
}