#include <stdio.h>
#include <ctype.h>


void strupr(char *s) {
    
    while (*s != '\0') {
        *s = toupper(*s); 
        s++;
    }
}

int main() {
    char string[100];
    
    printf("Digite uma string: ");
    scanf("%s", string);

    
    strupr(string);

    
    printf("A string em maiúsculas é: %s\n", string);

    return 0;
}
