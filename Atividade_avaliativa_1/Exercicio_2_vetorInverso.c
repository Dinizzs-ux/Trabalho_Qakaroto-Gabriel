#include <stdio.h>

int main() {
    int vetor[5];
    for(int i = 0; i < 5; i++) {
        printf("Digite o %d o numero: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    printf("Vetor inverso: ");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", vetor[i]);
    }
    return 0;
}