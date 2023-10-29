#include <stdio.h>

int main() {
    int valores[10];

    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &valores[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        printf("%d", valores[i]);
        if (i < 9) {
            printf(" ");
        }
    }
    printf("\n");

    
    int num_atual = 10;
    while (num_atual > 1) {
        int num_novo[num_atual - 1];
        for (int i = 0; i < num_atual - 1; i++) {
            num_novo[i] = valores[i] + valores[i + 1];
            printf("%d", num_novo[i]);
            if (i < num_atual - 2) {
                printf(" ");
            }
        }
        printf("\n");

       
        for (int i = 0; i < num_atual - 1; i++) {
            valores[i] = num_novo[i];
        }

        num_atual--;
    }

    return 0;
}


