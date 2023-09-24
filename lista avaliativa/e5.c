#include <stdio.h>

int main() {
      int valor1, valor2;

      printf("Digite um valor:");
      scanf("%d", &valor1);
      printf("Digite um valor:");
       scanf("%d", &valor2);

       if (valor1 == valor2)
       {
        printf("os valores sao iguais: ");
       }
       else if (valor1 > valor2)
       {
        printf("%d eh maior que %d\n", valor1, valor2);
       }
       else{
        printf("%d eh maior que %d\n", valor2, valor1);
       }

       
       if (valor1 % valor2 == 0)
       {
        printf("%d eh multiplo de %d\n", valor1, valor2);
       }
       else if (valor2 % valor1 ==0)
       {
        printf("%d eh multiplo de %d\n", valor2, valor1);
       }

       

    return 0;
}
