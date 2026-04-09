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
    if (isEmpty(p)) {
        return '\0'; 
    }
    No* temp = p->topo;
    char valor = temp->valor;
    p->topo = p->topo->proximo;
    free(temp);
    return valor;
}

int isBalanced(char* expressao) {
    Pilha p;
    inicializar(&p);
    
    char* ptr = expressao; 

    while (*ptr != '\0') {
        if (*ptr == '(' || *ptr == '{' || *ptr == '[') {
            push(&p, *ptr);
        } 
        else if (*ptr == ')' || *ptr == '}' || *ptr == ']') {
            if (isEmpty(&p)) {
                return 0;
            }
            
            char topo = pop(&p);
            
            if ((*ptr == ')' && topo != '(') ||
                (*ptr == '}' && topo != '{') ||
                (*ptr == ']' && topo != '[')) {
                
                while(!isEmpty(&p)) pop(&p);
                return 0; 
            }
        }
        ptr++;
    }
    
    int balanceado = isEmpty(&p);
    
    while(!isEmpty(&p)) pop(&p);
    
    return balanceado;
}

int main() {
    char expressao[100];
    
    printf("--- Validador de Expressoes ---\n");
    printf("Digite a expressao: ");
    scanf("%99s", expressao);

    if (isBalanced(expressao)) {
        printf("Resultado: Expressao VALIDA.\n");
    } else {
        printf("Resultado: Expressao INVALIDA.\n");
    }

    return 0;
}
