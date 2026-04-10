#include <stdio.h>
#include <stdlib.h>

typedef struct cliente {
    int id;
    int tempoServico; 
    struct cliente *prox;
} Cliente;

typedef struct {
    Cliente *inicio;
    Cliente *fim;
} Fila;

void inserir(Fila *f, int id, int tempo) {
    Cliente *novo = (Cliente*) malloc(sizeof(Cliente));
    novo->id = id;
    novo->tempoServico = tempo;
    novo->prox = NULL;

    if (f->inicio == NULL) {
        f->inicio = novo;
    } else {
        f->fim->prox = novo;
    }
    f->fim = novo;
}

void simular(Fila *f) {
    int relogioEspera = 0; 
    Cliente *aux;

    printf("\nRESULTADO DA SIMULACAO\n");
    printf("ID\t Atendimento\t Tempo de Espera\n");

    while (f->inicio != NULL) {
        aux = f->inicio;

        printf("%d\t %d min\t %d min\n", aux->id, aux->tempoServico, relogioEspera);

        relogioEspera += aux->tempoServico;

        f->inicio = aux->prox;
        free(aux);
    }
    f->fim = NULL;
}

int main() {
    Fila fila;
    fila.inicio = NULL;
    fila.fim = NULL;
    
    int n, idUsuario, tempoUsuario;

    printf("Quantos clientes vao entrar na fila? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nDados do Cliente %d:\n", i + 1);
        
        printf("Digite o ID: ");
        scanf("%d", &idUsuario);
        
        printf("Digite o tempo de atendimento (minutos): ");
        scanf("%d", &tempoUsuario);
        
        inserir(&fila, idUsuario, tempoUsuario);
    }

    simular(&fila);

    return 0;
}