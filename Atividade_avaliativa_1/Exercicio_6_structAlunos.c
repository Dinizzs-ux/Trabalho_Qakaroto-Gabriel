#include <stdio.h>
#include <string.h>

#define TOTAL 10

struct Aluno {
    char nome[50];
    int matricula;
    float media;
};

int main() {
    struct Aluno alunos[TOTAL];
    struct Aluno aprovados[TOTAL];
    struct Aluno reprovados[TOTAL];

    int i, contAprovados = 0, contReprovados = 0;

    for (i = 0; i < TOTAL; i++) {
        printf("\nAluno %d\n", i + 1);

        printf("Nome: ");
        getchar();
        fgets(alunos[i].nome, 50, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Media Final: ");
        scanf("%f", &alunos[i].media);

        if (alunos[i].media >= 5.0) {
            aprovados[contAprovados++] = alunos[i];
        } else {
            reprovados[contReprovados++] = alunos[i];
        }
    }

    printf("\n Alunos Aprovados \n");
    for (i = 0; i < contAprovados; i++) {
        printf("\nNome: %s", aprovados[i].nome);
        printf("\nMatricula: %d", aprovados[i].matricula);
        printf("\nMedia: %.2f\n", aprovados[i].media);
    }

    printf("\n Alunos Reprovados\n");
    for (i = 0; i < contReprovados; i++) {
        printf("\nNome: %s", reprovados[i].nome);
        printf("\nMatricula: %d", reprovados[i].matricula);
        printf("\nMedia: %.2f\n", reprovados[i].media);
    }

    return 0;
}