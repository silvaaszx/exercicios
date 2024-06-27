#include <stdio.h>

void determinarPerfil(int dia, int mes, int ano) {
    int idade = 2024 - ano; 

    if (idade < 18) {
        printf("Perfil: Jovem\n");
    } else if (idade >= 18 && idade < 30) {
        printf("Perfil: Jovem Adulto\n");
    } else if (idade >= 30 && idade < 50) {
        printf("Perfil: Adulto\n");
    } else {
        printf("Perfil: Idoso\n");
    }
}

int main() {
    int dia, mes, ano;


    printf("Digite a data de nascimento (dd mm aaaa): ");
    scanf("%d %d %d", &dia, &mes, &ano);

   
    determinarPerfil(dia, mes, ano);

    return 0;
}
