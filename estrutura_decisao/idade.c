#include <stdio.h>

int main() {
    int idade = 0;
    printf("Qual sua idade?");
    scanf("%i", &idade);

    if(idade >= 18) {
        printf("Voce é maior de idade, pode encher a cara fiote");
    } else {
        printf("Voce e menor de idade, pode beber tambem");
    }

    return 0;
}