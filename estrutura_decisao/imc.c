#include <stdio.h>

int main() {

    float peso = 0.0;
    float altura = 0.0;
    float imc = 0.0;

    printf("Qual seu peso (kg)? ");
    scanf("%f", &peso);

    printf("Qual sua altura (m)? ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\nSeu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } 
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Peso normal \n");
    } 
    else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } 
    else {
        printf("Obesidade\n");
    }

    return 0;
};