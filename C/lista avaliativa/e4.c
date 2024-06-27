#include <stdio.h>

int main(){
      char nivel;
      float salario, aumento;

      printf("Digite o Nivel de Experiencia: ");
      scanf("%c", &nivel);

      printf("Digite o salario atual: ");
      scanf("%f", &salario);

      switch (nivel)
      {
      case 'a':
       aumento = salario * 0.05;
       
       break;
      case 'b':
        aumento = salario * 0.07;
        break;

      case 'c':
        aumento = salario * 0.08;
        break;

      default:
       break;
      }

      float novosalario = salario + aumento;

      printf("O novo salario eh: R$ %.2f", novosalario);
      
      
      
      
      
      
      
      
      
      
       return 0;
}