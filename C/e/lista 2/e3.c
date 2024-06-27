#include <stdio.h>


int strlen(char *s) {
    int length = 0;
    
    
    while (*s != '\0') {
        length++;
        s++;
    }
    
    return length;
}

int main() {
    char string[100];
    
    printf("Digite uma string: ");
    scanf("%s", string);

    
    printf("O comprimento da string é: %d\n", strlen(string));

    return 0;
}
