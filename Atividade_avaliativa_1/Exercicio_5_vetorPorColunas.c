#include <stdio.h>

int main() {
    int vetor[3];
    int matriz[3][3];
    int resultado[3];
    int i, j;


    printf("--- Entrada do Vetor ---\n");
    for (i = 0; i < 3; i++) {
        printf("Digite o valor para vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\n--- Entrada da Matriz 3x3 ---\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (j = 0; j < 3; j++) {
        resultado[j] = 0; 
        for (i = 0; i < 3; i++) {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }

    printf("\n--- Vetor Resultante ---\n");
    printf("[ ");
    for (j = 0; j < 3; j++) {
        printf("%d ", resultado[j]);
    }
    printf("]\n");

    return 0;
}