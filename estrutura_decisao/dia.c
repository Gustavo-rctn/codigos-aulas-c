#include <stdio.h>

int main() {
    int dia = 0;
    printf("Qual dia da semana? (dom->0, sab-6)");
    scanf("%i", &dia);

    if (dia == 1) {
        printf("Domingo so alegria, de boa na lagoa");
    } else if (dia == 2) {
        printf("Segundona, bora trabalhar");
    } else if (dia == 3) {
        printf("Terca, vamo pra cima");
    } else if (dia == 4) {
        printf("Quarta, vamo pra cima");
    } else if (dia == 5) {
        printf("Quinta, ta chegandoooo");
    } else if (dia == 6) {
        printf("Sexta, NOWA HALL");
    } else if (dia == 7) {
        printf("Sabado, DIA DE JANELA");
    } else {
        printf("Amigao a semana tem 7 dias pae"); 
    }

    return 0;
}