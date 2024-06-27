#include <stdio.h>
#include <math.h>

int ehPrimo(int n) {
    
    if (n <= 1) {
        return 0; 
    }

   
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    
    return 1; 
}

int main() {
    int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    
    if (ehPrimo(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
