#include <stdio.h>
#include <stdlib.h>

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

void inverterString(char* str) {
    Pilha p;
    inicializar(&p);
    
    char* ptr = str;

    while (*ptr != '\0') {
        push(&p, *ptr);
        ptr++;
    }

    ptr = str;
    while (!isEmpty(&p)) {
        *ptr = pop(&p);
        ptr++;
    }

}

int main() {
    char texto[100];
    
    printf("--- Inversor de Strings ---\n");
    printf("Digite uma string para inverter: ");
    
    scanf(" %[^\n]", texto);

    inverterString(texto);

    printf("String invertida: %s\n", texto);

    return 0;
}