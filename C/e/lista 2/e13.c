#include <stdio.h>
#include <string.h>

#define MAX_PESSOAS 5
#define MAX_NOME 50
#define MAX_TELEFONE 15


struct PESSOA {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
};


void preencherAgenda(struct PESSOA agenda[]) {
    for (int i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%s", agenda[i].nome);
        printf("Digite o telefone da pessoa %d: ", i + 1);
        scanf("%s", agenda[i].telefone);
    }
}


char* procurarTelefone(struct PESSOA agenda[], char nome[]) {
    for (int i = 0; i < MAX_PESSOAS; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            return agenda[i].telefone;
        }
    }
    return "Telefone não encontrado";
}

int main() {

    struct PESSOA agenda[MAX_PESSOAS];

    
    preencherAgenda(agenda);


    char nome[MAX_NOME];
    printf("\nDigite o nome da pessoa para procurar o telefone: ");
    scanf("%s", nome);
    char* telefone = procurarTelefone(agenda, nome);
    printf("Telefone encontrado: %s\n", telefone);

    return 0;
}
