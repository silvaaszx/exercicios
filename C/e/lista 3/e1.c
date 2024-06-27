#include <stdio.h>


void minimax(float v[], int n, float *a, float *b) {
    
    if (n <= 0)
        return;

    
    *a = *b = v[0];

   
    for (int i = 1; i < n; i++) {
        if (v[i] < *a)
            *a = v[i];
        if (v[i] > *b)
            *b = v[i];
    }
}

int main() {
    
    float vetor[] = {3.5, 1.2, 6.8, 2.1, 4.9};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    
    float min, max;

   
    minimax(vetor, tamanho, &min, &max);

    
    printf("Valor mínimo: %.2f\n", min);
    printf("Valor máximo: %.2f\n", max);

    return 0;
}
