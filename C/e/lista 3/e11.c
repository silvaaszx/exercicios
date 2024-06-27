#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *monet(double v) {
    
    char *formatted = (char *)malloc(20 * sizeof(char));
    if (formatted == NULL) {
        return NULL; 
    }

    
    sprintf(formatted, "R$ %.2f", v);

    
    int tamanho = strlen(formatted);
    for (int i = tamanho - 6; i > 4; i -= 3) {
        memmove(formatted + i + 1, formatted + i, tamanho - i);
        formatted[i] = '.';
        tamanho++;
    }

    return formatted;
}

int main() {
    double valor = 1234.56;

    
    char *formatado = monet(valor);

    if (formatado != NULL) {
        printf("%s\n", formatado);
        free(formatado); 
    } else {
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}
