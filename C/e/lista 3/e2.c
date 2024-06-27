#include <stdio.h>

int main() {
    
    int a = 1, b = 2, c = 3, d = 4;
    int *p = &b;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;

    
    printf("A partir da variável a: %c\n", 'A' + a - 1);
    printf("A partir da variável b: %c\n", 'A' + *p - 1);
    printf("A partir da variável c: %c\n", 'A' + **q - 1);
    printf("A partir da variável d: %c\n", 'A' + ***r - 1);
    printf("A partir da variável s: %c\n", 'A' + ****s - 1);

    return 0;
}
