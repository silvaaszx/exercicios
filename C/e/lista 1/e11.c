#include <stdio.h>

unsigned long long fat(int n) {
    
    unsigned long long fatorial = 1;
    
    
    for (int i = 1; i <= n; i++) {
        fatorial *= i;
    }
    
    
    return fatorial;
}

int main() {
    int num;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    
    if (num < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
        return 1;
    }

    
    printf("O fatorial de %d é: %llu\n", num, fat(num));

    return 0;
}
