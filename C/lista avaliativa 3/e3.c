#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validarPlaca(char plate[]) {
    if(strlen(plate) == 8) {
        if(isalpha(plate[0]) && isalpha(plate[1]) && isalpha(plate[2]) && plate[3] == '-' &&
           isdigit(plate[4]) && isdigit(plate[5]) && isdigit(plate[6]) && isdigit(plate[7])) {
            return 1;
        }
    } else if(strlen(plate) == 7) {
        if(isalpha(plate[0]) && isalpha(plate[1]) && isalpha(plate[2]) && isdigit(plate[3]) &&
           isalpha(plate[4]) && isdigit(plate[5]) && isdigit(plate[6])) {
            return 1;
        }
    }
    return 0;
}

int validarDiaSemana(char day[]) {
    if(strcmp(day, "SEGUNDA-FEIRA") == 0 || strcmp(day, "TERCA-FEIRA") == 0 || strcmp(day, "QUARTA-FEIRA") == 0 ||
       strcmp(day, "QUINTA-FEIRA") == 0 || strcmp(day, "SEXTA-FEIRA") == 0 || strcmp(day, "SABADO") == 0 ||
       strcmp(day, "DOMINGO") == 0) {
        return 1;
    }
    return 0;
}

int main() {
    char plate[9];
    char dayOfWeek[20];

    scanf("%s", plate);
    scanf("%s", dayOfWeek);

    int plateValid = 0, dayValid = 0;
    
    if (validarPlaca(plate)) {
        plateValid++;
    }
    if (validarDiaSemana(dayOfWeek)) {
        dayValid++;
    }

    int plateInvalid = 0, dayInvalid = 0;
    
    if (!validarPlaca(plate)) {
        plateInvalid++;
    }

    if (!validarDiaSemana(dayOfWeek)) {
        dayInvalid++;
    }

    if (plateInvalid == 1 && dayValid == 1) {
        printf("Placa invalida\n");
    } else if (plateValid == 1 && dayInvalid == 1) {
        printf("Dia da semana invalido\n");
    } else if (plateInvalid == 1 && dayInvalid == 1) {
        printf("Placa invalida\n");
        printf("Dia da semana invalido\n");
    } else {
        int lastDigit = plate[strlen(plate) - 1] - '0';

        if ((strcmp(dayOfWeek, "SABADO") == 0) || (strcmp(dayOfWeek, "DOMINGO") == 0)) {
            printf("Nao ha proibicao no fim de semana\n");
        } else {
            int seg = 0, ter = 0, qua = 0, qui = 0, sex = 0, sab = 0, dom = 0;

            if (strcmp(dayOfWeek, "SEGUNDA-FEIRA") == 0) {
                seg++;
            } else if (strcmp(dayOfWeek, "TERCA-FEIRA") == 0) {
                ter++;
            } else if (strcmp(dayOfWeek, "QUARTA-FEIRA") == 0) {
                qua++;
            } else if (strcmp(dayOfWeek, "QUINTA-FEIRA") == 0) {
                qui++;
            } else if (strcmp(dayOfWeek, "SEXTA-FEIRA") == 0) {
                sex++;
            } else if (strcmp(dayOfWeek, "SABADO") == 0) {
                sab++;
            } else if (strcmp(dayOfWeek, "DOMINGO") == 0) {
                dom++;
            } else {
                printf("Dia da semana invalido\n");
            }

            if (seg == 1 && (lastDigit == 0 || lastDigit == 1)) {
                printf("%s nao pode circular segunda-feira\n", plate);
            } else if (seg == 1 && (lastDigit != 0 || lastDigit != 1)) {
                printf("%s pode circular segunda-feira\n", plate);
            } else if (ter == 1 && (lastDigit == 2 || lastDigit == 3)) {
                printf("%s nao pode circular terca-feira\n", plate);
            } else if (ter == 1 && (lastDigit != 2 || lastDigit != 3)) {
                printf("%s pode circular terca-feira\n", plate);
            } else if (qua == 1 && (lastDigit == 4 || lastDigit == 5)) {
                printf("%s nao pode circular quarta-feira\n", plate);
            } else if (qua == 1 && (lastDigit != 4 || lastDigit != 5)) {
                printf("%s pode circular quarta-feira\n", plate);
            } else if (qui == 1 && (lastDigit == 6 || lastDigit == 7)) {
                printf("%s nao pode circular quinta-feira\n", plate);
            } else if (qui == 1 && (lastDigit != 6 || lastDigit != 7)) {
                printf("%s pode circular quinta-feira\n", plate);
            } else if (sex == 1 && (lastDigit == 8 || lastDigit == 9)) {
                printf("%s nao pode circular sexta-feira\n", plate);
            } else if (sex == 1 && (lastDigit != 8 || lastDigit != 9)) {
                printf("%s pode circular sexta-feira\n", plate);
            }
        }
    }
    return 0;
}
