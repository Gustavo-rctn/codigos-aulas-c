#include <stdio.h>

int main() {
    int dia = 0;

    printf("Qual dia da semana? 1-> dom, 7->sab");
    scanf("%i", &dia);

    switch (dia)
    {
    case 1:
        printf("Domingo!!!");
        break;
    
    case 2:
        printf("Segundona, vamos pra cima");
        break;

    case 3:
        printf("terça, vamos pra cima");
        break;

    case 4:
        printf("qurta, vamos pra cima");
        break;

    case 5:
        printf("quinta, não é o dia mas ta perto");
        break;

    case 6:
        printf("SEXTOU KRLHHHHHH !!!");
        break;

    case 7:
        printf("Sabadou !!!");
        break;
        default: printf("Dia nao encontrado");
    }


    return 0;
}