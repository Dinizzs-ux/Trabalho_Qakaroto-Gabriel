#include <stdio.h>

int main() {
    int mat[3][3];
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\nResultado (x5):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j] * 5);
        }
        printf("\n");
    }
    return 0;
}