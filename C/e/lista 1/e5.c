#include <stdio.h>

int main() {
    int x = 5;
    int y;

    y = x++ + ++x;

    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d\n", y);

    return 0;
}
