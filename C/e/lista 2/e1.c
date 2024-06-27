#include <stdio.h>

int main() {
    int numeros[5];

    
    printf("Digite 5 números:\n");
    for (int i = 0; i < 5; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("\nNúmeros na ordem inversa:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}
