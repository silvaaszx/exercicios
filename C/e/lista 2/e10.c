#include <stdio.h>

#define TAMANHO_TABULEIRO 3


void inicializarTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}


void exibirTabuleiro(char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    printf("Tabuleiro:\n");
    printf("  1 2 3\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%c", tabuleiro[i][j]);
            if (j < TAMANHO_TABULEIRO - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < TAMANHO_TABULEIRO - 1) {
            printf("  -----\n");
        }
    }
}

int main() {
    char tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];

    
    inicializarTabuleiro(tabuleiro);

    
    exibirTabuleiro(tabuleiro);

    return 0;
}
