#include <stdio.h>

int main()
{
    float notas[4];
    float soma = 0;
    float media;

    printf("Digite as 4 notas:\n");

    for(int i = 0; i < 4; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    media = soma / 4;

    printf ("A media das notas eh: %.2f");

    return 0;
}