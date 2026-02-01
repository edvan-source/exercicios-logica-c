#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char palavra[MAX];
    char pilha[MAX];
    int topo = -1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    // 1. PUSH: Colocando cada letra na pilha
    for (int i = 0; i < tamanho; i++) {
        topo++;
        pilha[topo] = palavra[i];
    }

    printf("Palavra invertida: ");

    // 2. POP: Tirando da pilha (sai na ordem inversa)
    while (topo >= 0) {
        printf("%c", pilha[topo]);
        topo--;
    }

    printf("\n");

    return 0;
}