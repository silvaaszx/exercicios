#include <stdio.h>


int strlen(char *s) {
    char *p = s; 

    
    while (*p != '\0') {
        p++;
    }

    
    return p - s;
}

int main() {
    char mensagem[] = "Hello, world!";

    
    int tamanho = strlen(mensagem);

    
    printf("O tamanho da string é: %d\n", tamanho);

    return 0;
}
