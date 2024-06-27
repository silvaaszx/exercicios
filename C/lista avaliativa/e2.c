#include <stdio.h>

int main() {
    int num, digito, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    
    if (num % 2 == 0) {
        printf("%d eh um numero par.\n", num);
    } else {
        printf("%d eh um nmero ímpar.\n", num);
    }

    
    int valor = num < 0 ? -num : num; 
    while (valor > 0) {
        digito = valor % 10; 
        soma += digito; 
        valor /= 10; 
    }

    printf("a soma dos digitos do numero eh: %d\n", soma);

    return 0;
}
