#include <stdio.h>


void regr(int n) {
    
    if (n == 0) {
        printf("0 ");
        return;
    }
    
    printf("%d ", n);
    regr(n - 1);
}

void bin(int n) {
    
    if (n == 0) {
        printf("0");
        return;
    }
    
    bin(n / 2);
    printf("%d", n % 2);
}

int main() {
    int num;

    printf("Digite um número inteiro positivo para a contagem regressiva e para a conversão binária: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Erro: O número deve ser positivo.\n");
        return 1;
    }

    printf("Contagem regressiva de %d até 1:\n", num);
    regr(num);
    printf("\n");

    printf("Representação binária de %d: ", num);
    bin(num);
    printf("\n");

    return 0;
}
