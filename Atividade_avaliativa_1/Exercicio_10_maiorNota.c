#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

Aluno* maiorNota(Aluno *ptr, int n) {
    Aluno *melhor = ptr;

    for (int i = 1; i < n; i++) {
        if ((ptr + i)->nota > melhor->nota) {
            melhor = (ptr + i);
        }
    }
    return melhor;
}

int main() {
    int n;
    Aluno *lista;

    printf("Digite a quantidade de alunos (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    lista = (Aluno*) malloc(n * sizeof(Aluno));

    if (lista == NULL) {
        printf("Erro ao alocar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nDados do Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", (lista + i)->nome);
        printf("Nota: ");
        scanf("%f", &((lista + i)->nota));
    }

    Aluno *vencedor = maiorNota(lista, n);

    printf("\n Aluno com a Maior Nota: \n");
    printf("Nome: %s\n", vencedor->nome);
    printf("Nota: %.2f\n", vencedor->nota);

    free(lista);

    return 0;
}