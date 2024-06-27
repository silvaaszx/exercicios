#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LENGTH 100
#define MAX_NUM_STRINGS 5

int main() {
    
    char matriz[MAX_NUM_STRINGS][MAX_STR_LENGTH];
    
    printf("Digite %d strings:\n", MAX_NUM_STRINGS);
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        scanf("%s", matriz[i]);
    }

    printf("\nStrings armazenadas na matriz:\n");
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        printf("%s\n", matriz[i]);
    }

    
    char *vetor[MAX_NUM_STRINGS];
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        vetor[i] = (char *)malloc(MAX_STR_LENGTH * sizeof(char));
        if (vetor[i] == NULL) {
            printf("Erro ao alocar memória\n");
            return 1;
        }
    }

    printf("\nDigite mais %d strings:\n", MAX_NUM_STRINGS);
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        scanf("%s", vetor[i]);
    }

    printf("\nStrings armazenadas no vetor de ponteiros:\n");
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        printf("%s\n", vetor[i]);
    }

   
    for (int i = 0; i < MAX_NUM_STRINGS; i++) {
        free(vetor[i]);
    }

    return 0;
}
