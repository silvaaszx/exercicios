#include <stdio.h>

int main() {
    int cadastrada;
    int tentativa;
    
    printf("Cadastre uma senha: ");
    
    scanf("%d", &cadastrada);

    printf("Senha Cadastrada = %d\n", cadastrada);

    while (1) {
        
        scanf("%d", &tentativa);

        if (tentativa == cadastrada) {
           
            printf("senha valida!\n");
            break;
        } else {
            
            printf("senha invalida!\n");
           
        }

    }

    return 0;
}
       
