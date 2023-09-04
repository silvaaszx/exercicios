#include <stdio.h>
#include <math.h>
int main(){
      
double area, raio;


    printf("Digite o raio: ");
    scanf("%lf", &raio);

      area = M_PI * pow(raio, 2);

    printf("A area da circuferencia e: %.2lf\n", area);





return 0;
}