#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTATOS 100
#define MAX_NOME 50
#define MAX_EMAIL 50
#define MAX_TELEFONE 20

typedef struct {
    char nome[MAX_NOME];
    char telefone[MAX_TELEFONE];
    char tipo_telefone[MAX_NOME];
    char email[MAX_EMAIL];
    char aniversario[11]; 
} Contato;

Contato agenda[MAX_CONTATOS];
int tamanho_agenda = 0;

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void apaga(int posicao) {
    if (posicao < 0 || posicao >= tamanho_agenda) {
        printf("Posicao invalida!\n");
        return;
    }
    for (int i = posicao; i < tamanho_agenda - 1; i++) {
        agenda[i] = agenda[i + 1];
    }
    tamanho_agenda--;
    printf("Contato apagado com sucesso!\n");
}

void altera(int posicao) {
    if (posicao < 0 || posicao >= tamanho_agenda) {
        printf("Posicao invalida!\n");
        return;
    }
    printf("Novo nome: ");
    scanf("%s", agenda[posicao].nome);
    printf("Novo telefone: ");
    scanf("%s", agenda[posicao].telefone);
    printf("Novo tipo de telefone: ");
    scanf("%s", agenda[posicao].tipo_telefone);
    printf("Novo email: ");
    scanf("%s", agenda[posicao].email);
    printf("Nova data de aniversario (dd/mm/aaaa): ");
    scanf("%s", agenda[posicao].aniversario);
    printf("Contato alterado com sucesso!\n");
}

void lista() {
    printf("Lista de contatos:\n");
    for (int i = 0; i < tamanho_agenda; i++) {
        printf("%d: %s (%s - %s)\n", i, agenda[i].nome, agenda[i].telefone, agenda[i].tipo_telefone);
        printf("   Email: %s\n", agenda[i].email);
        printf("   Aniversario: %s\n", agenda[i].aniversario);
    }
}

void le() {
    if (tamanho_agenda >= MAX_CONTATOS) {
        printf("Agenda cheia!\n");
        return;
    }
    printf("Nome: ");
    scanf("%s", agenda[tamanho_agenda].nome);
    for (int i = 0; i < tamanho_agenda; i++) {
        if (strcmp(agenda[tamanho_agenda].nome, agenda[i].nome) == 0) {
            printf("Erro: Ja existe um contato com esse nome na agenda!\n");
            return;
        }
    }
    printf("Telefone: ");
    scanf("%s", agenda[tamanho_agenda].telefone);
    printf("Tipo de telefone (celular, fixo, residencia ou trabalho): ");
    scanf("%s", agenda[tamanho_agenda].tipo_telefone);
    printf("Email: ");
    scanf("%s", agenda[tamanho_agenda].email);
    printf("Data de aniversario (dd/mm/aaaa): ");
    scanf("%s", agenda[tamanho_agenda].aniversario);
    tamanho_agenda++;
    printf("Contato adicionado com sucesso!\n");
}

void grava() {
    FILE *arquivo;
    arquivo = fopen("agenda.txt", "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return;
    }
    for (int i = 0; i < tamanho_agenda; i++) {
        fprintf(arquivo, "%s %s %s %s %s\n", agenda[i].nome, agenda[i].telefone, agenda[i].tipo_telefone, agenda[i].email, agenda[i].aniversario);
    }
    fclose(arquivo);
    printf("Agenda gravada com sucesso!\n");
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Lista contatos\n");
    printf("2. Adiciona contato\n");
    printf("3. Apaga contato\n");
    printf("4. Altera contato\n");
    printf("5. Grava agenda\n");
    printf("6. Tamanho da agenda: %d\n", tamanho_agenda);
    printf("7. Ordenar por nome\n");
    printf("0. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    FILE *arquivo;
    arquivo = fopen("agenda.txt", "r");
    if (arquivo != NULL) {
        while (fscanf(arquivo, "%s %s %s %s %s", agenda[tamanho_agenda].nome, agenda[tamanho_agenda].telefone, agenda[tamanho_agenda].tipo_telefone, agenda[tamanho_agenda].email, agenda[tamanho_agenda].aniversario) != EOF) {
            tamanho_agenda++;
        }
        fclose(arquivo);
        printf("Agenda carregada com sucesso!\n");
    }

    do {
        menu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                lista();
                break;
            case 2:
                le();
                break;
            case 3: {
                int pos;
                printf("Posicao do contato a ser apagado: ");
                scanf("%d", &pos);
                apaga(pos);
                break;
            }
            case 4: {
                int pos;  
                printf("Posicao do contato a ser alterado: ");
                scanf("%d", &pos);
                altera(pos);
                break;
            }
            case 5:
                grava();
                break;
            case 6:
                printf("Tamanho da agenda: %d\n", tamanho_agenda);
                break;
            case 7:
               
                printf("Opcao nao implementada ainda.\n");
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
