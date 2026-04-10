#include <stdio.h>
#include <stdlib.h>

typedef struct doc {
    int id;
    int paginas;
    int prioridade;
    struct doc *prox;
} Documento;

typedef struct {
    Documento *inicio;
} FilaImpressao;

void inserirOrdenado(FilaImpressao *f, int id, int pags, int prio) {
    Documento *novo = (Documento*) malloc(sizeof(Documento));
    novo->id = id;
    novo->paginas = pags;
    novo->prioridade = prio;
    novo->prox = NULL;

    if (f->inicio == NULL || prio < f->inicio->prioridade) {
        novo->prox = f->inicio;
        f->inicio = novo;
    } else {
        Documento *aux = f->inicio;
        
        while (aux->prox != NULL && aux->prox->prioridade <= prio) {
            aux = aux->prox;
        }
        
        novo->prox = aux->prox;
        aux->prox = novo;
    }
}

void processarImpressao(FilaImpressao *f) {
    Documento *aux;
    
    printf("\nRELATORIO DE IMPRESSAO\n");
    printf("Prioridade\tID\tPaginas\n");

    while (f->inicio != NULL) {
        aux = f->inicio;
        printf("%d\t\t%d\t%d\n", aux->prioridade, aux->id, aux->paginas);
        
        f->inicio = aux->prox;
        free(aux);
    }
}

int main() {
    FilaImpressao fila;
    fila.inicio = NULL;
    
    int n, id, pags, prio;

    printf("Quantos documentos deseja inserir na fila? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nDocumento %d:\n", i + 1);
        printf("Digite o ID: ");
        scanf("%d", &id);
        printf("Digite o numero de paginas: ");
        scanf("%d", &pags);
        printf("Digite a prioridade: ");
        scanf("%d", &prio);
        
        inserirOrdenado(&fila, id, pags, prio);
    }

    processarImpressao(&fila);

    return 0;
}