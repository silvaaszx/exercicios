#include <stdio.h>


struct Matriz {
    int valores[4][4];
};

int main() {
    
    struct Matriz A, B, resultado;
    char operacao[10];
    int num_entrada;

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &num_entrada);
            A.valores[i][j] = num_entrada;
        }
    }

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &num_entrada);
            B.valores[i][j] = num_entrada;
        }
    }

   
    scanf("%s", operacao);

    
    if (strcmp(operacao, "soma") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado.valores[i][j] = A.valores[i][j] + B.valores[i][j];
            }
        }
    } else if (strcmp(operacao, "sub") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado.valores[i][j] = A.valores[i][j] - B.valores[i][j];
            }
        }
    } else if (strcmp(operacao, "mult") == 0) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                resultado.valores[i][j] = 0;
                for (int k = 0; k < 4; k++) {
                    resultado.valores[i][j] += A.valores[i][k] * B.valores[k][j];
                }
            }
        }
    }

    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", resultado.valores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
