 #include <stdio.h>


unsigned long long calcularFatorial(int n) {
    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; ++i) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {
    int numero;
    printf("Digite um número natural: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: Não é possível calcular o fatorial de um número negativo.\n");
    } else {
        unsigned long long fatorial = calcularFatorial(numero);
        printf("%d! = %llu\n", numero, fatorial);
    }

    return 0;
}
