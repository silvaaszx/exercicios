#include <stdio.h>


void lerMatriz(int n, int matriz[n][n]) {
    printf("Digite os elementos da matriz %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}


void exibirDiagonalPrincipal(int n, int matriz[n][n]) {
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Digite a ordem da matriz quadrada: ");
    scanf("%d", &n);

    
    int matriz[n][n];

   
    lerMatriz(n, matriz);

    
    exibirDiagonalPrincipal(n, matriz);

    return 0;
}
