#include <stdio.h>

int main(){
      int copa = 1930;
      int jogos = 1896;
      int valor;

      printf("Digite Um Ano: ");
      scanf("%d", &valor);
      int a = 0;

      while (copa <= valor || jogos <= valor)
      {
        if (valor == copa)
        {
            printf("Houve copa do mundo no ano de: %d", valor);
            a = a + 1;
            
        }
          else if(valor == jogos){
            printf("Houveram Jogos Olimpicos no ano de: %d", valor);
            a = a + 1;
        }
          jogos += 4;
           copa += 4;
         
      }
         if(!a){
            printf("Nao houve nenhum dos dois eventos no ano de %d", valor);
         }








       return 0;
}