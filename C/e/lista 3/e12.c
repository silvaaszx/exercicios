#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    int id;
    char nome[50];
    float salario;
} Funcionario;


int compare_id(const void *a, const void *b) {
    const Funcionario *fa = (const Funcionario *)a;
    const Funcionario *fb = (const Funcionario *)b;
    return fa->id - fb->id;
}


int compare_nome(const void *a, const void *b) {
    const Funcionario *fa = (const Funcionario *)a;
    const Funcionario *fb = (const Funcionario *)b;
    return strcmp(fa->nome, fb->nome);
}


int compare_salario(const void *a, const void *b) {
    const Funcionario *fa = (const Funcionario *)a;
    const Funcionario *fb = (const Funcionario *)b;
    return (fa->salario > fb->salario) - (fa->salario < fb->salario);
}

int main() {
    
    Funcionario funcionarios[] = {
        {101, "Joao", 2500.0},
        {102, "Maria", 3200.0},
        {103, "Pedro", 1800.0},
        {104, "Ana", 2900.0}
    };
    int num_funcionarios = sizeof(funcionarios) / sizeof(Funcionario);

    
    printf("Ordenacao por ID:\n");
    qsort(funcionarios, num_funcionarios, sizeof(Funcionario), compare_id);
    for (int i = 0; i < num_funcionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }
    printf("\n");

    printf("Ordenacao por Nome:\n");
    qsort(funcionarios, num_funcionarios, sizeof(Funcionario), compare_nome);
    for (int i = 0; i < num_funcionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }
    printf("\n");

    printf("Ordenacao por Salario:\n");
    qsort(funcionarios, num_funcionarios, sizeof(Funcionario), compare_salario);
    for (int i = 0; i < num_funcionarios; i++) {
        printf("ID: %d, Nome: %s, Salario: %.2f\n", funcionarios[i].id, funcionarios[i].nome, funcionarios[i].salario);
    }
    printf("\n");

    return 0;
}
