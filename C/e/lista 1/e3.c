#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    
    printf("Digite os coeficientes (a, b, c) da equacao de segundo grau: ");
    scanf("%f %f %f", &a, &b, &c);


    delta = b * b - 4 * a * c;

    
    if (delta > 0) {
        
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes reais da equacao sao: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        
        x1 = -b / (2 * a);
        printf("A raiz real dupla da equacao e: %.2f\n", x1);
    } else {
        
        printf("A equacao nao possui raizes reais.\n");
    }

    return 0;
}
