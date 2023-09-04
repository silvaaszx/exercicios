#include <stdio.h>

int main() {
    int valor, resto;
    printf("digite um valor: ");
    scanf("%d", &valor);
    printf("%d\n", valor);

    int cedulas[] = {100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 7; i++) {
        int quantidade = valor / cedulas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, cedulas[i]);
        resto = valor % cedulas[i];
        valor = resto;
    }

    return 0;
}
