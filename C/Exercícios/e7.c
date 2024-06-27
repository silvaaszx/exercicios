#include <stdio.h>

int main() {
    int idadeEmDias;
    printf("escreva a quantidade de dias: ");
    scanf("%d", &idadeEmDias);

    int anos = idadeEmDias / 365;
    int meses = (idadeEmDias % 365) / 30;
    int dias = (idadeEmDias % 365) % 30;

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);

    return 0;
}