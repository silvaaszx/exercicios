#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> 

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <segundos>\n", argv[0]);
        return 1;
    }

    int segundos = atoi(argv[1]);

    if (segundos <= 0) {
        printf("O número de segundos deve ser positivo.\n");
        return 1;
    }

    printf("Contagem regressiva iniciada:\n");

    
    for (int i = segundos; i > 0; i--) {
        printf("%d\n", i);
        sleep(1); 
    }

   
    printf("Tempo esgotado! Campainha tocando!\a\n");

    return 0;
}
