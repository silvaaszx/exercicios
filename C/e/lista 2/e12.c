#include <stdio.h>
#include <string.h>

// Definição da estrutura para armazenar os dados do voo
struct Voo {
    char origem[50];
    char destino[50];
    char dataPartida[11]; // Formato: "dd/mm/aaaa"
    char horarioPartida[6]; // Formato: "hh:mm"
    char dataChegada[11]; // Formato: "dd/mm/aaaa"
    char horarioChegada[6]; // Formato: "hh:mm"
};

int main() {
    // Declarando uma variável do tipo Voo e atribuindo valores aos seus membros usando a notação de ponto
    struct Voo voo1;
    strcpy(voo1.origem, "São Paulo");
    strcpy(voo1.destino, "Rio de Janeiro");
    strcpy(voo1.dataPartida, "10/05/2024");
    strcpy(voo1.horarioPartida, "08:00");
    strcpy(voo1.dataChegada, "10/05/2024");
    strcpy(voo1.horarioChegada, "09:30");

    // Declarando e inicializando uma variável do tipo Voo usando inicialização direta
    struct Voo voo2 = {
        "Nova York",
        "Los Angeles",
        "15/06/2024",
        "12:00",
        "15/06/2024",
        "15:30"
    };

    // Exibindo os dados dos voos
    printf("Voo 1:\n");
    printf("Origem: %s\n", voo1.origem);
    printf("Destino: %s\n", voo1.destino);
    printf("Data de partida: %s\n", voo1.dataPartida);
    printf("Horário de partida: %s\n", voo1.horarioPartida);
    printf("Data de chegada: %s\n", voo1.dataChegada);
    printf("Horário de chegada: %s\n", voo1.horarioChegada);
    printf("\n");

    printf("Voo 2:\n");
    printf("Origem: %s\n", voo2.origem);
    printf("Destino: %s\n", voo2.destino);
    printf("Data de partida: %s\n", voo2.dataPartida);
    printf("Horário de partida: %s\n", voo2.horarioPartida);
    printf("Data de chegada: %s\n", voo2.dataChegada);
    printf("Horário de chegada: %s\n", voo2.horarioChegada);

    return 0;
}
