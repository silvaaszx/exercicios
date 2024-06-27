#include <stdio.h>
#include <math.h>

int main(){
        int total, horas, minutos, segundos;

        printf("Digite um numero: ");
        scanf("%d", &total);

        horas = total / 3600;
        total %= 3600;
        minutos = total / 60;
        segundos = total % 60;

        printf("Tempo convertido e de: %02d:%02d:%02d\n",horas, minutos, segundos);





return 0;
}