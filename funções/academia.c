#include <stdio.h>

float calcularCustoPorTreino(float valorAnual, int vezesSemana)
{
    int treinosAno;
    float custoPorTreino;

    treinosAno = vezesSemana * 52;
    custoPorTreino = valorAnual / treinosAno;

    return custoPorTreino;
}

int main()
{
    float anualVivaSaude;
    float anualSaudeEmDia;
    float anualFitnessPro;

    float custoVivaSaude;
    float custoSaudeEmDia;
    float custoFitnessPro;

    anualVivaSaude = 12 * 39.99;
    anualSaudeEmDia = 12 * 48.99;
    anualFitnessPro = 12 * 58.99;

    custoVivaSaude = calcularCustoPorTreino(anualVivaSaude, 3);
    custoSaudeEmDia = calcularCustoPorTreino(anualSaudeEmDia, 4);
    custoFitnessPro = calcularCustoPorTreino(anualFitnessPro, 7);

    printf("COMPARACAO DE ACADEMIAS\n");

    printf("\nViva Saude");
    printf("\nMensalidade: R$ 49.99");
    printf("\nPlano anual: R$ %.2f", anualVivaSaude);
    printf("\nCusto por treino: R$ %.2f\n", custoVivaSaude);

    printf("\nSaude em Dia");
    printf("\nMensalidade: R$ 59.99");
    printf("\nPlano anual: R$ %.2f", anualSaudeEmDia);
    printf("\nCusto por treino: R$ %.2f\n", custoSaudeEmDia);

    printf("\nFitness Pro");
    printf("\nMensalidade: R$ 69.99");
    printf("\nPlano anual: R$ %.2f", anualFitnessPro);
    printf("\nCusto por treino: R$ %.2f\n", custoFitnessPro);

    if (custoVivaSaude < custoSaudeEmDia &&
        custoVivaSaude < custoFitnessPro)
    {
        printf("\nA academia Viva Saude e a opcao mais vantajosa.");
    }
    else if (custoSaudeEmDia < custoVivaSaude &&
             custoSaudeEmDia < custoFitnessPro)
    {
        printf("\nA academia Saude em Dia e a opcao mais vantajosa.");
    }
    else
    {
        printf("\nA academia Fitness Pro e a opcao mais vantajosa.");
    }

    return 0;
}