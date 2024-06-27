#include <stdio.h>


char *strchr(char *s, char c) {
    
    while (*s != '\0') {
        if (*s == c) {
            return s; 
        }
        s++; 
    }
    
    
    return NULL;
}

int main() {
    char s[] = "Hello, world!";
    char c = 'o';

    
    char *ptr = strchr(s, c);

    if (ptr != NULL) {
        printf("Caractere '%c' encontrado na posição: %ld\n", c, ptr - s);
    } else {
        printf("Caractere '%c' não encontrado na string.\n", c);
    }

    return 0;
}
