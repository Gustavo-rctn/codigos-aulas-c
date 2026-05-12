#include <stdio.h>

int main() {
    float cabelo = 0;
    float barba = 0;
    float luzes =0;
    float sobranselha = 0;
    float platinado = 0;
    float cerveja = 0;
    float coca = 0;

    printf("Qual o valor do corte?");
    scanf("%f", &cabelo);

    printf("Qual o valor da barba?");
    scanf("%f", &barba);

    printf("Qual o valor das luzes?");
    scanf("%f", &luzes);

    printf("Qual o valor pra fazer a sombrancelhas ?");
    scanf("%f", &sobranselha);

        printf("Qual o valor pra platinar?");
    scanf("%f", &platinado);

    printf("Qual o valor da cerveja?");
    scanf("%f", &cerveja);

    printf("Qual o valor da coca-cola?");
    scanf("%f", &coca);

    float total = cabelo + barba + luzes + sobranselha + platinado + cerveja + coca;

    if (total < 50){
        printf("Bglh ta barato pó fazer\n");
    } else if ( total >= 50 && total <=70)
    {
        printf("slk, abre o olho japonês\n");
    } else if (total >= 70)
    {
        printf("Chapou, pode ir pá oto\n");
    }

    printf("O valor do corte ficou: %.2f", total);
    
    
    



    return 0;
}