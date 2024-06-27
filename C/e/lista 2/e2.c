#include <stdio.h>


void exibirLinha(int temperatura) {
    printf("%2d°C |", temperatura);
    for (int i = 0; i < temperatura; i++) {
        printf("*");
    }
    printf("\n");
}


void histograma(int t[], int tamanho) {
    printf("Histograma da Variação de Temperatura durante a Semana:\n");
    for (int i = 0; i < tamanho; i++) {
        exibirLinha(t[i]);
    }
}

int main() {
    
    int temperaturas[] = {19, 21, 25, 22, 20, 17, 15};
    int tamanho = sizeof(temperaturas) / sizeof(temperaturas[0]);

   
    histograma(temperaturas, tamanho);

    return 0;
}
