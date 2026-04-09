#include <stdio.h>
#include <stdlib.h>

// Reutilizamos a mesma estrutura de Pilha e Nó
typedef struct No {
    char valor;
    struct No* proximo;
} No;

typedef struct Pilha {
    No* topo;
} Pilha;

void inicializar(Pilha* p) {
    p->topo = NULL;
}

int isEmpty(Pilha* p) {
    return p->topo == NULL;
}

void push(Pilha* p, char valor) {
    No* novoNo = (No*)malloc(sizeof(No));
    if (novoNo == NULL) {
        printf("Erro de alocacao de memoria.\n");
        exit(1);
    }
    novoNo->valor = valor;
    novoNo->proximo = p->topo;
    p->topo = novoNo;
}

char pop(Pilha* p) {
    if (isEmpty(p)) return '\0';
    No* temp = p->topo;
    char valor = temp->valor;
    p->topo = p->topo->proximo;
    free(temp);
    return valor;
}

// Inverte a string no próprio vetor original
void inverterString(char* str) {
    Pilha p;
    inicializar(&p);
    
    char* ptr = str;

    // 1º Passo: Empilhar todos os caracteres
    while (*ptr != '\0') {
        push(&p, *ptr);
        ptr++;
    }

    // 2º Passo: Retornar o ponteiro para o início e sobrescrever desempilhando
    ptr = str;
    while (!isEmpty(&p)) {
        *ptr = pop(&p);
        ptr++;
    }
    // Como a string original já tinha o '\0' no final exato do percurso, 
    // ele não será sobrescrito indevidamente.
}

int main() {
    char texto[100];
    
    printf("--- Inversor de Strings ---\n");
    printf("Digite uma string para inverter: ");
    
    // Lê a string inteira, incluindo espaços, até a quebra de linha
    scanf(" %[^\n]", texto);

    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}