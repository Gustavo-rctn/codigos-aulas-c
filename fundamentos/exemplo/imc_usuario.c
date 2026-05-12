/**
 * Agora você deve copiar
 * o codigo do exemplo imc.c
 * e dixar ele com informações 
 * dinamicas :)
 */

 #include <stdio.h>

 int main() {
    float altura = 0;
    float peso = 0;

    printf("Qual é sua altura?");
    scanf("%f", &altura);

    printf("Qual seu peso?");
    scanf("%f", &peso);

    float imc = peso / (altura*altura);

    printf("Seu imc é %f", imc);
    return 0;
 }