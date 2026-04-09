#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[31]; 
    char autor[16]; 
    int ano;
} Livro;

int main() {
    Livro livros[5];
    char busca[31];
    int encontrados = 0;

    printf("--- Cadastro de 5 Livros ---\n");
    for(int i = 0; i < 5; i++) {
        printf("\nLivro %d:\n", i + 1);
        
        printf("Titulo (max 30 letras): ");
        scanf(" %30[^\n]", livros[i].titulo);
        
        printf("Autor (max 15 letras): ");
        scanf(" %15[^\n]", livros[i].autor);
        
        printf("Ano de publicacao: ");
        scanf("%d", &livros[i].ano);
    }

    printf("Digite o titulo para buscar: ");
    scanf(" %30[^\n]", busca);

    printf("\n Resultados da Busca \n");
    for(int i = 0; i < 5; i++) {
        if(strcmp(livros[i].titulo, busca) == 0) {
            printf("Titulo: %s | Autor: %s | Ano: %d\n", 
                    livros[i].titulo, livros[i].autor, livros[i].ano);
            encontrados++;
        }
    }

    if(encontrados == 0) {
        printf("Nenhum livro encontrado com esse titulo.\n");
    } else {
        printf("\nTotal de exemplares encontrados: %d\n", encontrados);
    }

    return 0;
}