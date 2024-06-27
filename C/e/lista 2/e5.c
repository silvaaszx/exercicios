#include <stdio.h>


void strcat(char *s, char *t) {
    
    while (*s != '\0') {
        s++;
    }

    
    while (*t != '\0') {
        *s = *t;
        s++;
        t++;
    }

    
    *s = '\0';
}

int main() {
    char s[100] = "facil";
    char t[] = "idade";

    
    strcat(s, t);

    
    printf("A string concatenada é: %s\n", s);

    return 0;
}
