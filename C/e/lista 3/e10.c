#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *strsub(const char *s, int i, int n) {
    int tamanho = strlen(s);

    
    if (i < 0 || i >= tamanho) {
        return NULL; 
    }

   
    int comprimento = (n > 0) ? ((n < tamanho - i) ? n : tamanho - i) : 0;

    
    char *substring = (char *)malloc((comprimento + 1) * sizeof(char));
    if (substring == NULL) {
        return NULL; 
    }

    
    strncpy(substring, s + i, comprimento);
    substring[comprimento] = '\0'; 

    return substring;
}

int main() {
    const char *s = "Hello, world!";
    int i = 7; 
    int n = 5; 

     
    char *substring = strsub(s, i, n);

    if (substring != NULL) {
        printf("Substring: %s\n", substring);
        free(substring); 
    } else {
        printf("Posição inicial inválida.\n");
    }

    return 0;
}
