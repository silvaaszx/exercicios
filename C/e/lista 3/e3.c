#include <stdio.h>


void carrega(int *v, int n) {
    printf("Digite %d valores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    
    int vetor[n];

    
    carrega(vetor, n);

    
    printf("Valores do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
