#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <valor1> <operador> <valor2>\n", argv[0]);
        return 1;
    }

    float valor1 = atof(argv[1]);
    float valor2 = atof(argv[3]);
    char *operador = argv[2];

    float resultado;

    if (strcmp(operador, "+") == 0) {
        resultado = valor1 + valor2;
    } else if (strcmp(operador, "-") == 0) {
        resultado = valor1 - valor2;
    } else if (strcmp(operador, "*") == 0) {
        resultado = valor1 * valor2;
    } else if (strcmp(operador, "/") == 0) {
        if (valor2 != 0) {
            resultado = valor1 / valor2;
        } else {
            printf("Erro: Divisão por zero!\n");
            return 1;
        }
    } else {
        printf("Operador inválido!\n");
        return 1;
    }

    printf("Resultado: %.2f\n", resultado);

    return 0;
}
