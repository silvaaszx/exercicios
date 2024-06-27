#include <stdio.h>
#include <string.h>


void strins(char *s, char c, int p) {
    int tamanho = strlen(s);

    
    if (p >= 0 && p <= tamanho) {
        
        for (int i = tamanho; i >= p; i--) {
            s[i + 1] = s[i];
        }

        
        s[p] = c;
    } else {
       
        s[tamanho] = c;
        s[tamanho + 1] = '\0'; 
    }
}

int main() {
    char s[100];
    char c;
    int posicao;

    printf("Digite uma string: ");
    scanf("%s", s);

    printf("Digite o caractere a ser inserido: ");
    scanf(" %c", &c);

    printf("Digite a posição do caractere a ser inserido (ou -1 para inserir no final): ");
    scanf("%d", &posicao);

    
    strins(s, c, posicao);

    
    printf("A string após a inserção é: %s\n", s);

    return 0;
}
