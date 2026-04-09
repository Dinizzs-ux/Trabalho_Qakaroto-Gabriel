#include <stdio.h>

int main() {
    char p1[50], p2[50], p3[50];
    printf("Digite três palavras: ");
    scanf("%s %s %s", p1, p2, p3);
    printf("Ordem inversa das palavras: %s %s %s\n", p3, p2, p1);
    return 0;
}