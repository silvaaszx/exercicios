#include <stdio.h>


int strpos(char *s, char c) {
    int posicao = 0;

    
    while (*s != '\0') {
        if (*s == c) {
            return posicao; 
        }
        s++;
        posicao++;
    }

    
    return -1;
}

int main() {
    char s[100];
    char c;

    printf("Digite uma string: ");
    scanf("%s", s);

    printf("Digite um caractere para procurar na string: ");
    scanf(" %c", &c);

    
    int posicao = strpos(s, c);

    
    if (posicao != -1) {
        printf("A primeira ocorrência de '%c' na string está na posição %d.\n", c, posicao);
    } else {
        printf("O caractere '%c' não ocorre na string.\n", c);
    }

    return 0;
}
