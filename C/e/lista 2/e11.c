#include <stdio.h>


struct Horario {
    int hora;
    int minutos;
    int segundos;
};

int main() {
    
    struct Horario agora = {10, 30, 45}; 

    
    printf("%02d:%02d:%02d\n", agora.hora, agora.minutos, agora.segundos);

    return 0;
}
