#include <stdio.h>
#include <math.h>
int main(){
     
      int distancia;
      double combustivel, consumo;

        printf("Escreva a distancia percorrida: ");
        scanf("%d", &distancia);
        printf("Escreva a quantidade de combustivel gasto: ");
        scanf("%lf", &combustivel);

        consumo = distancia / combustivel;

        printf("O consumo medio foi de: %0.3lf km/l", consumo);

 











    return 0;
}