#include <stdio.h>


void strdel(char *s, int p) {
    int i = 0;

    
    while (s[i] != '\0' && i < p) {
        i++;
    }

    
    if (s[i] != '\0') {
        while (s[i] != '\0') {
            s[i] = s[i + 1];
            i++;
        }
    }
}

int main() {
    char s[100];
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", s);

    printf("Digite a posição do caractere a ser removido: ");
    scanf("%d", &posicao);

    
    strdel(s, posicao);

    
    printf("A string após a remoção é: %s\n", s);

    return 0;
}
