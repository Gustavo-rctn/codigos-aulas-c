#include <stdio.h>
#include <locale.h>

int ain() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    int km = 0;
    int dias = 0;
    char nome [30];
    float totalPorKm = 0;
    float totalPorDia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("Olá seja bem vindo, qual seu nome?");
    scanf("%S", nome);

    printf("Obrigado por escolher nossa loja, %S", nome);

    printf("\nQuantos KMs você vai rodar com o carro?");
    scanf("%i", &km);

    printf("Para mostrar um relatório detalhado, diga quantos dias vai precisar do carro?");
    scanf("%i", &dias);

    totalPorKm = km *VALOR_POR_KM;
    totalPorDia = dias * VALOR_POR_DIA;

    printf("%S, segue um relatório detalhado", nome);
    printf("\nTotal por KM: R$ %.2f", totalPorKm);
    printf("\nTotal por dia: R$ %.2f", totalPorDia);

    if (totalPorDia < totalPorKm)
    {
        printf("\nSugerimos usar o plano por dia");
    } else {
        printf("\nSugerimos usar o plano por KM");
    }
    
    printf("\nTenha uma ótima tarde");


    return 0;
}