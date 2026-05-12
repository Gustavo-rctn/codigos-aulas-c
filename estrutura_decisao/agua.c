#include <stdio.h>

int main() {
    // Constantes
    const float valorPorLitro = 0.05;
    const int periodo30 = 30;

    const int faixaEconomica = 250;
    const int faixaExcessiva = 400;

    const float valorMulta = 150;
    const float valorDesconto = 50;

    // Variáveis
    int numeroPessoas = 0;
    int idade = 0;
    int litrosConsumidos = 0;
    float valorTotalConta = 0;

    // Entrada
    printf("Ola, vamos calcular sua conta de agua\n");
    printf("Quantas pessoas moram na residencia?\n");
    scanf("%i", &numeroPessoas);

    // Loop para calcular consumo
    for(int i = 1; i <= numeroPessoas; i++) {

        printf("\nQual a idade da pessoa %i: ", i);
        scanf("%i", &idade);

        if (idade <= 10) {
            printf("Faixa de 18 litros por dia\n");
            litrosConsumidos += 18;

        } else if (idade <= 18) {
            printf("Faixa de 30 litros por dia\n");
            litrosConsumidos += 30;

        } else if (idade <= 25) {
            printf("Faixa de 42 litros por dia\n");
            litrosConsumidos += 42;

        } else {
            printf("Faixa de 24 litros por dia\n");
            litrosConsumidos += 24;
        }
    }

    // cálculo mensal
    valorTotalConta = valorPorLitro * litrosConsumidos * periodo30;

    // relatório final
    printf("\n===== RELATORIO =====\n");
    printf("Total de pessoas: %i\n", numeroPessoas);
    printf("Consumo diario total: %i litros\n", litrosConsumidos);
    printf("Consumo mensal: %i litros\n", litrosConsumidos * periodo30);
    printf("Valor da conta: R$ %.2f\n", valorTotalConta);

    if (litrosConsumidos >= faixaExcessiva) {

        printf("Faixa de consumo: Excessiva\n");
        printf("Multa aplicada: R$ %.2f\n", valorMulta);

    } else if (litrosConsumidos <= faixaEconomica) {

        printf("Faixa de consumo: Economica\n");
        printf("Desconto na proxima conta: R$ %.2f\n", valorDesconto);

    } else {

        printf("Faixa de consumo: Normal\n");
    }

    return 0;
}