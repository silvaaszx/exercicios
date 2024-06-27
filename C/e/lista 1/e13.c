#include <stdio.h>

unsigned long long fibonacci(int n) {
    
    if (n == 0 || n == 1) {
        return n;
    }
    
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    printf("Digite um número inteiro positivo para calcular o termo correspondente da sequência de Fibonacci: ");
    scanf("%d", &num);

   
    if (num < 0) {
        printf("Erro: O número deve ser positivo.\n");
        return 1;
    }

    
    printf("O %d-ésimo termo da sequência de Fibonacci é: %llu\n", num, fibonacci(num));

    return 0;
}
