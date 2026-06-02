#include <stdio.h>
#include <stdlib.h>

#define TAXA_VEICULO 0.015
#define TAXA_IMOVEL 0.005
#define LIMITE_RENDA_MAX 0.30

int main()
{
    char nome[30];
    int tipoCategoria = 0;
    int tipoSubCategoria = 0;
    int meses = 0;
    float valorFinanciado = 0;
    float rendaMensal = 0;
    int totalFinanciado = 0;
    float valorEntrada = 0;
    int temEntrada = 0;

    float taxaJuros = 0;
    float totalComJuros = 0;
    float valorParcela = 0;
    int mesesMin = 0;
    int mesesMax = 0;
    int i;

    printf("Qual o seu nome?");
    scanf("%s", &nome);

    printf("---- BEM VINDO AO NOSSO SISTEMA DE FINANCIAMENTO %s ----\n\n", &nome);

    do
    {
        printf("Escolha o tipo de finaciamento:\n");
        printf("[1] Veiculos\n");
        printf("[2] Imoveis\n");
        printf("Digite sua opcao:");

        scanf("%d", &tipoCategoria);

        if (tipoCategoria != 1 && tipoCategoria != 2)
        {
            printf("Opcao invalida! Tente novamente \n\n");
        }

    } while (tipoCategoria != 1 && tipoCategoria != 2);

    printf("\n");

    printf("Digite o valor que deseja financiar:");
    scanf("%f", &valorFinanciado);

    printf("Digita sua renda mensal:");
    scanf("%f", &rendaMensal);

    printf("\n");

    switch (tipoCategoria)
    {
    case 1:
        printf("---- VEICULOS DISPONIVEIS ----\n");
        printf("[1] Caminhao (100 a 200 meses)");
        printf("[2] Carro (6 a 18 meses)\n");
        printf("[3] Moto (3 a 24 meses)\n");
        printf("Digite a opcao:");
        scanf("%d", &tipoSubCategoria);

        if (tipoSubCategoria == 1)
        {
            printf("\nVoce escolheu Caminhao\n");
            mesesMin = 100;
            mesesMax = 200;
        }
        else if (tipoSubCategoria == 2)
        {
            printf("\nVoce escolheu Carro\n");
            mesesMin = 6;
            mesesMax = 18;
        }
        else if (tipoSubCategoria == 3)
        {
            printf("\nVoce escolheu Moto\n");
            mesesMin = 3;
            mesesMax = 24;
        }
        else
        {
            printf("Opcao invalida! Saindo do programa...\n");
            return 1;
        }
        taxaJuros = TAXA_VEICULO;
        break;

    case 2:
        printf("---- IMOVEIS DISPONIVEIS ----\n");
        printf("[1] casa (150 a 360 meses)\n");
        printf("[2] Apartamento (100 a 300 meses)\n");
        printf("Digite a opcao");

        scanf("%d", &tipoSubCategoria);

        if (tipoSubCategoria == 1)
        {
            printf("\nVoce escolheu Casa\n");
            mesesMin = 150;
            mesesMax = 360;
        }
        else if (tipoSubCategoria == 2)
        {
            printf("\nVoce escolheu Apartamento");
            mesesMin = 100;
            mesesMax = 300;
        }
        else
        {
            printf("Opcao invalida! Saindo do programa...\n");
            return 1;
        }
        taxaJuros = TAXA_IMOVEL;
        break;
    }
    printf("\n");

    do
    {
        printf("Digite o prazo do financiamento (em meses):");
        printf("\n(minimo %d - maximo %d meses):", mesesMin, mesesMax);
        scanf("%d", &meses);

        if (meses < mesesMin || meses > mesesMax)
        {
            printf("Praz invalido! O prazo deve estar entre %d e %d meses \n\n", mesesMin, mesesMax);
        }

    } while (meses < mesesMin || meses > mesesMax);
    do
    {

        printf("Tem algum valor para dar de entrada no financiamento? [1] Sim, [2] Nao");
        scanf(" %d", &temEntrada);
        if (temEntrada != 1 && temEntrada != 2)
        {
            printf("Opcao invalida! Escolha 1 ou 2");
        }
    } while (temEntrada != 1 && temEntrada != 2);
    if (temEntrada == 1)
    {
        do
        {
            printf("Digite o valor da entrada (R$):");
            scanf(" %f", &valorEntrada);
            if (valorEntrada < 0 || valorEntrada >= valorFinanciado)
            {
                printf("Valor de entrada invalida! O valor deve ser maior que 0 e menor que o valor do bem\n\n");
            }
        } while (valorEntrada < 0 || valorEntrada >= valorFinanciado);
    } else {
        valorEntrada = 0;
    }
    
    
    

    printf("\n");

    printf("---- CALCULANDO FINANCIAMENTO ----");
    totalComJuros = valorFinanciado - valorEntrada;
    for (i = 1; i <= meses; i++)
    {
        totalComJuros = totalComJuros * (1 + taxaJuros);
    }
    valorParcela = totalComJuros / meses;
    float limiteParcelas = rendaMensal * LIMITE_RENDA_MAX;

    printf("RESUMO DO FINANCIAMNTO:\n");
    printf("-------------------------------------\n");

    if (tipoCategoria == 1)
    {
        printf("Categoria: Veiculos\n");
    }
    else
    {
        printf("Categoria: Imoveis\n");
    }

    if (tipoCategoria == 1)
    {
        if (tipoSubCategoria == 1)
            printf("Bem financiado: Caminhao\n");
        else if (tipoSubCategoria == 2)
            printf("Bem financiado: Carro\n");
        else
            printf("Bem financiado: Moto\n");
    }
    else
    {
        if (tipoSubCategoria == 1)
            printf("Bem financiado: Casa\n");
        else
            printf("Bem financiado: Apartamento");
    }

    printf("Valor financiado: R$ %.2f\n", valorFinanciado);
    printf("Prazo: %d meses\n", meses);
    printf("Valor entrada: R$ %.2f\n", &valorEntrada);
    printf("Valor efetivamente financiado: R$ %.2f\n", valorFinanciado - valorEntrada);
    printf("Taxa de juros: %.1f%% ao mes\n", taxaJuros * 100);
    printf("Valor total com juros: R$ %.2f\n", totalComJuros);
    printf("Valor da parcela mensal R$ %.2f\n", valorParcela);
    printf("Sua renda mensal: R$ %.2f\n", rendaMensal);
    printf("Limite maximo do parcela (30%% da renda): R$ %.2f\n", limiteParcelas);
    printf("-----------------------------------------\n\n");

    if (valorParcela <= limiteParcelas)
    {
        printf("FINANCIAMENTO APROVADO!\n\n");
        printf("Parabens! Seu financiamento foi aprovado!\n");
        printf("As parcelas serao de R$ %.2f durante %d meses.\n", valorParcela, meses);

        printf("\n DETALHAMENTO DAS PARCELAS \n");

        if (meses <= 10)
        {
            for (i = 1; i <= meses; i++)
            {
                printf("Parcelas %d: R$ %.2f\n", i, valorParcela);
            }
        }
        else
        {
            printf("Primeiras 5 parcelas:\n");
            for (i = 1; i <= 5; i++)
            {
                printf("Parcela %d: R$ %.2f\n", i, valorParcela);
            }
            printf("...\n");

            printf("Ultima 5 parcelas:");
            for (i = meses - 4; i <= meses; i++)
            {
                printf("Parcelas %d: R$ %.2f\n", i, valorParcela);
            }
        }
    }
    else
    {
        printf(" FINANCIAMENTO NEGADO\n\n");
        printf("Infelizmente seu financiamento nao foi aprovado \n");
        printf("Motivo: A parcela de R$ %.2f excede 30%% da sua renda mensal (R$ %.2f) \n", valorParcela, limiteParcelas);
        printf("\nSugestoes\n");
        printf("- Aumentar o prazo do financiamento\n");
        printf("- Escolher um bem de menor valor\n");
        printf("- Dar uma entrada maior\n");
        printf("Obrigado por usar o nosso sistema\n\n");
        printf("FinanTech\n\n");
        printf("Sistema criado por Gustavo Reis (Dev Junior)");
    }

    return 0;
}