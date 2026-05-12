#include <stdio.h>

int main()
{
    float valorPintarCabelo = 0;
    float valorCortarCabelo = 0;
    float valorHidratacao = 0;
    float valorEscova = 0;
    float valorProgressiva = 0;
    float valorBabyLiss = 0;
    float total = 0;
    float parcelado = 0;

    int parcelas = 0;
    int opcao = 0;

    printf("Voce vai pintar o cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor para pintar o cabelo?\n");
        scanf("%f", &valorPintarCabelo);
    }

    printf("Voce vai cortar o cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor para cortar o cabelo?\n");
        scanf("%f", &valorCortarCabelo);
    }

    printf("Voce vai hidratar o cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor para hidratar o cabelo?\n");
        scanf("%f", &valorHidratacao);
    }

    printf("Voce vai escovar o cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor para escovar o cabelo?\n");
        scanf("%f", &valorEscova);
    }

    printf("Voce vai fazer progressiva no cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor da progressiva?\n");
        scanf("%f", &valorProgressiva);
    }

    printf("Voce vai fazer babyliss no cabelo? 1->sim, 0->nao\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Qual valor do babyliss?\n");
        scanf("%f", &valorBabyLiss);
    }

    total = valorBabyLiss + valorCortarCabelo + valorEscova + valorHidratacao + valorPintarCabelo + valorProgressiva;

    if (total <= 150)
    {
        printf("Esta barato\nValor R$ %.2f\n", total);
    }
    else if (total <= 250)
    {
        printf("Nao esta nem muito caro nem muito barato\nValor R$ %.2f\n", total);
    }
    else
    {
        printf("Ta caro pra carai essa fita ae!!\nValor R$ %.2f\n", total);
    }

    printf("\nVai pagar a vista ou parcelado?\n");
    printf("1 -> a vista\n0 -> parcelado\n");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        printf("Pagamento a vista. Total: R$ %.2f\n", total);
    }
    else if (opcao == 0)
    {
        printf("Quantas parcelas?\n");
        scanf("%d", &parcelas);

        if (parcelas > 0)
        {
            parcelado = total / parcelas;
            printf("Cada parcela ficara: R$ %.2f\n", parcelado);
        }
        else
        {
            printf("Numero de parcelas invalido.\n");
        }
    }

    return 0;
}