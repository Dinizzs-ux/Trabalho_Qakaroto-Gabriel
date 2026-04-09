#include <stdio.h>

int main() {
    int A[3][3], I[3][3], R[3][3];
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++) {
            printf("Matriz A [%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
            I[i][j] = (i == j) ? 1 : 0; // Cria a Identidade
        }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            R[i][j] = 0;
            for(int k=0; k<3; k++)
                R[i][j] += A[i][k] * I[k][j];
        }
    }

    printf("\nMatriz Resultante (A * I):\n");
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) printf("%d ", R[i][j]);
        printf("\n");
    }
    return 0;
}