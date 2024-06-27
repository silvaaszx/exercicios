#include <stdio.h>


typedef struct {
    char titulo[100];
    char autor[100];
    int ano_publicacao;
} Livro;


void preencher_tabela(Livro *tabela, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Digite o título do livro: ");
        scanf(" %[^\n]", (tabela + i)->titulo);
        printf("Digite o autor do livro: ");
        scanf(" %[^\n]", (tabela + i)->autor);
        printf("Digite o ano de publicação do livro: ");
        scanf("%d", &(tabela + i)->ano_publicacao);
    }
}


void exibir_tabela(Livro *tabela, int tamanho) {
    printf("\nTabela de Livros:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: %s\n", (tabela + i)->titulo);
        printf("Autor: %s\n", (tabela + i)->autor);
        printf("Ano de Publicação: %d\n", (tabela + i)->ano_publicacao);
        printf("\n");
    }
}

int main() {
    int tamanho_tabela;

    printf("Digite o tamanho da tabela de livros: ");
    scanf("%d", &tamanho_tabela);

    
    Livro *tabela = (Livro *)malloc(tamanho_tabela * sizeof(Livro));

    
    if (tabela == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    
    preencher_tabela(tabela, tamanho_tabela);

    
    exibir_tabela(tabela, tamanho_tabela);

    
    free(tabela);

    return 0;
}
