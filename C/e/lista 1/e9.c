#include <stdio.h>

int main() {
    int n, soma = 0, d;
    
    printf("Digite o número da conta (sem o dígito verificador): ");
    scanf("%d", &n);
    
    
    int temp = n;
    while (temp > 0) {
        soma += temp % 10;
        temp /= 10;
    }
    
    
    d = soma % 10;
    
    
    printf("Número de conta completo: %06d-%d\n", n, d);
    
    return 0;
}
