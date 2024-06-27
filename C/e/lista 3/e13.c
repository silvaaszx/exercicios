#include <stdio.h>


typedef struct {
    char titulo[100];
    char autor[100];
    int ano_publicacao;
} Livro;


void preencher_livro(Livro *livro) {
    printf("Digite o título do livro: ");
    scanf(" %[^\n]", livro->titulo); 
    printf("Digite o autor do livro: ");
    scanf(" %[^\n]", livro->autor);
    printf("Digite o ano de publicação do livro: ");
    scanf("%d", &livro->ano_publicacao);
}

int main() {
    Livro meu_livro;

    
    preencher_livro(&meu_livro);

    
    printf("\nDados do livro:\n");
    printf("Título: %s\n", meu_livro.titulo);
    printf("Autor: %s\n", meu_livro.autor);
    printf("Ano de Publicação: %d\n", meu_livro.ano_publicacao);

    return 0;
}
