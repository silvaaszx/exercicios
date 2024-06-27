#include <stdio.h>

int main() {
    int n, primeiro = 1, segundo = 1, proximo;

    printf("Digite o valor de n (n >= 3): ");
    scanf("%d", &n);

   
    if (n < 3) {
        printf("Erro: O valor de n deve ser maior ou igual a 3.\n");
        return 1; 
    }

  
    for (int i = 3; i <= n; i++) {
        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("O %d-ésimo termo da série de Fibonacci é: %d\n", n, segundo);

    return 0;
}
