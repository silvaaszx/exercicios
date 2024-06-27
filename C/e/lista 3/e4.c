#include <stdio.h>


void puts(char *s) {
    
    while (*s != '\0') {
        
        printf("%c", *s);
        
        s++;
    }
   
    printf("\n");
}

int main() {
    char mensagem[] = "Olá, mundo!";
    
  
    puts(mensagem);

    return 0;
}
