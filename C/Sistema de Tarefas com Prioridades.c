#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct Tarefa {
    int id;
    char descricao[100];
    int prioridade; 
    struct Tarefa* prox;
} Tarefa;


typedef struct {
    Tarefa* cabeca;
} ListaTarefas;

void inicializarLista(ListaTarefas* lista) {
    lista->cabeca = NULL;
}

void adicionarTarefa(ListaTarefas* lista, int id, char* descricao, int prioridade) {
    Tarefa* novaTarefa = (Tarefa*) malloc(sizeof(Tarefa));
    novaTarefa->id = id;
    strcpy(novaTarefa->descricao, descricao);
    novaTarefa->prioridade = prioridade;
    novaTarefa->prox = lista->cabeca;
    lista->cabeca = novaTarefa;
}

Tarefa* removerTarefa(ListaTarefas* lista, int id) {
    Tarefa* atual = lista->cabeca;
    Tarefa* anterior = NULL;

    while (atual != NULL && atual->id != id) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == NULL) {
        return NULL;
    }

    if (anterior == NULL) {
        lista->cabeca = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    return atual;
}


typedef struct {
    Tarefa* topo;
} PilhaTarefas;

void inicializarPilha(PilhaTarefas* pilha) {
    pilha->topo = NULL;
}

void empilhar(PilhaTarefas* pilha, Tarefa* tarefa) {
    tarefa->prox = pilha->topo;
    pilha->topo = tarefa;
}

Tarefa* desempilhar(PilhaTarefas* pilha) {
    if (pilha->topo == NULL) {
        return NULL;
    }
    Tarefa* tarefaRemovida = pilha->topo;
    pilha->topo = pilha->topo->prox;
    return tarefaRemovida;
}


typedef struct {
    Tarefa* frente;
    Tarefa* tras;
} FilaTarefas;

void inicializarFila(FilaTarefas* fila) {
    fila->frente = NULL;
    fila->tras = NULL;
}

void enfileirar(FilaTarefas* fila, Tarefa* tarefa) {
    tarefa->prox = NULL;
    if (fila->tras != NULL) {
        fila->tras->prox = tarefa;
    }
    fila->tras = tarefa;
    if (fila->frente == NULL) {
        fila->frente = tarefa;
    }
}

Tarefa* desenfileirar(FilaTarefas* fila) {
    if (fila->frente == NULL) {
        return NULL;
    }
    Tarefa* tarefaRemovida = fila->frente;
    fila->frente = fila->frente->prox;
    if (fila->frente == NULL) {
        fila->tras = NULL;
    }
    return tarefaRemovida;
}

void moverTarefasParaEstruturas(ListaTarefas* lista, PilhaTarefas* pilha, FilaTarefas* fila) {
    Tarefa* atual = lista->cabeca;
    while (atual != NULL) {
        Tarefa* proxima = atual->prox;
        if (atual->prioridade == 1) {
            empilhar(pilha, removerTarefa(lista, atual->id));
        } else {
            enfileirar(fila, removerTarefa(lista, atual->id));
        }
        atual = proxima;
    }
}

void imprimirLista(ListaTarefas* lista) {
    Tarefa* atual = lista->cabeca;
    while (atual != NULL) {
        printf("Tarefa ID: %d, Descricao: %s, Prioridade: %d\n", atual->id, atual->descricao, atual->prioridade);
        atual = atual->prox;
    }
}

void imprimirPilha(PilhaTarefas* pilha) {
    Tarefa* atual = pilha->topo;
    while (atual != NULL) {
        printf("Tarefa ID: %d, Descricao: %s, Prioridade: %d\n", atual->id, atual->descricao, atual->prioridade);
        atual = atual->prox;
    }
}

void imprimirFila(FilaTarefas* fila) {
    Tarefa* atual = fila->frente;
    while (atual != NULL) {
        printf("Tarefa ID: %d, Descricao: %s, Prioridade: %d\n", atual->id, atual->descricao, atual->prioridade);
        atual = atual->prox;
    }
}

int main() {
    ListaTarefas lista;
    PilhaTarefas pilha;
    FilaTarefas fila;

    inicializarLista(&lista);
    inicializarPilha(&pilha);
    inicializarFila(&fila);

    
    adicionarTarefa(&lista, 1, "Tarefa 1", 1);
    adicionarTarefa(&lista, 2, "Tarefa 2", 0);
    adicionarTarefa(&lista, 3, "Tarefa 3", 1);
    adicionarTarefa(&lista, 4, "Tarefa 4", 0);

    moverTarefasParaEstruturas(&lista, &pilha, &fila);

    
    printf("Tarefas de alta prioridade:\n");
    imprimirPilha(&pilha);

    
    printf("\nTarefas de baixa prioridade:\n");
    imprimirFila(&fila);

    return 0;
}
