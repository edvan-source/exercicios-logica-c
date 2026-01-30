#include <stdio.h>

int main() {
    int numero, maior, menor;
    int i = 0;

    while (i < 10) {
        printf("Informe o valor %d de 10: ", i + 1);

        // O scanf retorna o número de itens lidos com sucesso
        if (scanf("%d", &numero) != 1) {
            printf("Erro: Por favor, digite apenas números inteiros.\n");
            
            // Limpa o buffer do teclado (remove a letra/caractere inválido)
            while (getchar() != '\n'); 
            
            continue; // Volta para o início do loop sem incrementar o 'i'
        }

        if (i == 0) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            } else if (numero < menor) {
                menor = numero;
            }
        }
        i++; // Só incrementa se a leitura foi bem-sucedida
    }

    printf("\nO maior valor e %d e o menor valor e %d\n", maior, menor);
    return 0;
}