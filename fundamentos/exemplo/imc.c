/*
Calcule o IMC
de uma pessoa
com os valores
fixos nas váriaveis
e mostre o valor
ao final
*/

#include <stdio.h>

int main() {
    float altura = 1.75;
    float peso = 70;

    int IMC = peso / (altura * altura);
    // saída
    printf("Seu IMC é %f", IMC);
    return 0;
}