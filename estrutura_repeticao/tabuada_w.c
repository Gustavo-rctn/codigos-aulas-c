#include <stdio.h>

int main() {
    int i = 0;
    int res = 0;
    int tabuada = 4;
    printf("Tabuada");

    while(i <= 10) {
        //imprimir 4x3=12
        res = i * tabuada;
        printf("\n%i x %i = %i", tabuada, i, res);
        i++
    }
}