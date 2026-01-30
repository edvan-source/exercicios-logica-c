#include <stdio.h>

int main() {
    int num;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);

    // i começa em 1; enquanto i for menor ou igual a 10; aumenta 1 por vez
    for (int i = 1; i <= 10; i++) {
        int resultado = num * i;
        printf("%d x %d = %d\n", num, i, resultado);
    }

    return 0;
}