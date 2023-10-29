#include <stdio.h>

float calcularForcaPonderada(int goleiro, int laterais, int zagueiros, int volantes, int meias, int atacantes) {
    
    float F = (8 * goleiro + 10 * laterais + 5 * zagueiros + 8 * volantes + 11 * meias + 12 * atacantes) / 100.0;
    return F;
}

int main() {
    char nomeTime1[31], nomeTime2[31];
    int forcasTime1[6] = {0}, forcasTime2[6] = {0};

   
    scanf("%30[^\n]", nomeTime1);

    
    for (int i = 0; i < 11; i++) {
        char nomeJogador[31], posicao;
        int forca;
        scanf("%30[^;];%c;%d", nomeJogador, &posicao, &forca);
      
        switch (posicao) {
            case 'G':
                forcasTime1[0] = forca;
                break;
            case 'L':
                forcasTime1[1] += forca;
                break;
            case 'Z':
                forcasTime1[2] += forca;
                break;
            case 'V':
                forcasTime1[3] += forca;
                break;
            case 'M':
                forcasTime1[4] += forca;
                break;
            case 'A':
                forcasTime1[5] += forca;
                break;
        }
    }

   
    scanf(" %30[^\n]", nomeTime2);

    
    for (int i = 0; i < 11; i++) {
        char nomeJogador[31], posicao;
        int forca;
        scanf("%30[^;];%c;%d", nomeJogador, &posicao, &forca);
        
        switch (posicao) {
            case 'G':
                forcasTime2[0] = forca;
                break;
            case 'L':
                forcasTime2[1] += forca;
                break;
            case 'Z':
                forcasTime2[2] += forca;
                break;
            case 'V':
                forcasTime2[3] += forca;
                break;
            case 'M':
                forcasTime2[4] += forca;
                break;
            case 'A':
                forcasTime2[5] += forca;
                break;
        }
    }

  
    float forcaTime1 = calcularForcaPonderada(forcasTime1[0], forcasTime1[1], forcasTime1[2], forcasTime1[3], forcasTime1[4], forcasTime1[5]);
    float forcaTime2 = calcularForcaPonderada(forcasTime2[0], forcasTime2[1], forcasTime2[2], forcasTime2[3], forcasTime2[4], forcasTime2[5]);

   
    if (forcaTime1 > forcaTime2) {
        printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
        printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);
        printf("%s eh mais forte\n", nomeTime1);
    } else if (forcaTime1 < forcaTime2) {
        printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
        printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);
        printf("%s eh mais forte\n", nomeTime2);
    } else {
        printf("%s: %.2f de forca\n", nomeTime1, forcaTime1);
        printf("%s: %.2f de forca\n", nomeTime2, forcaTime2);
        printf("Os times tem a mesma forca\n");
    }

    return 0;
}
