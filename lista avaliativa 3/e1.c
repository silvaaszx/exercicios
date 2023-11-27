#include <stdio.h>
#include <string.h>


int valorRomano(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}


int romanoParaDecimal(char* romano) {
    int resultado = 0;
    int tamanho = strlen(romano);

    for (int i = 0; i < tamanho; i++) {
        int valorAtual = valorRomano(romano[i]);

        if (i < tamanho - 1) {
            int valorProximo = valorRomano(romano[i + 1]);

            if (valorAtual < valorProximo) {
                resultado -= valorAtual;
            } else {
                resultado += valorAtual;
            }
        } else {
            resultado += valorAtual;
        }
    }

    return resultado;
}


void imprimirBinario(int decimal) {
    if (decimal > 0) {
        imprimirBinario(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    
    char numeroRomano[13];
    scanf("%s", numeroRomano);

    
    int decimal = romanoParaDecimal(numeroRomano);

    printf("%s na base 2: ", numeroRomano);
    imprimirBinario(decimal);
    printf("\n");

    printf("%s na base 10: %d\n", numeroRomano, decimal);

    printf("%s na base 16: %x\n", numeroRomano, decimal);

    return 0;
}

