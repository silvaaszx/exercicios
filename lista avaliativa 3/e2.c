#include <stdio.h>
#include <math.h>

int main() {
   
    int meses;
    double aporte, taxa;
    scanf("%d %lf %lf", &meses, &aporte, &taxa);

    
    if (meses < 1 || meses > 240 || aporte < 1 || aporte > 5000 || taxa < 0.01 || taxa > 0.2) {
        printf("Entrada invalida\n");
        return 1;
    }

   
    double montante = 0;
    for (int i = 1; i <= meses; i++) {
        montante = (montante + aporte) * (1 + taxa);

       
        printf("Montante ao fim do mes %d: R$ %.2lf\n", i, montante);
    }

    return 0;
}

