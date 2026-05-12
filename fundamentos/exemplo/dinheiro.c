/*
você está trabalhando e gostaria de
guardar 25% do seu salário do mês.
O banco está com um investimento que
rende 6.8% ao mês de juros e você
vai usar esse formato de investimento.
Crie um algoritimo para calcular seu
investimento.
*/

#include <stdio.h>

int main()
{
    float salário = 0;
    float porcentagem = 0.25;
    int meses = 0;
    float fixo = 0.068;

    printf("quanto voce ganha?");
    scanf("%f", &salário);

    printf("Por quatos meses pretende guardar?");
    scanf("%i", &meses);

    float juros = meses * fixo;
    float salario25 = salário * porcentagem;
    float totalDinheiro = meses * salario25;
    float totalJurosValor = totalDinheiro * juros;
    float totalComJuros = totalJurosValor + totalDinheiro;

    printf("Total de juros : %.2f \n", juros);
    printf("valor guardado sem juros R$ : %.2f \n", totalDinheiro);
    printf("Meses: %i \n", meses);
    printf("valor: %.2f \n", totalJurosValor);
    printf("valor guardado com juros : %.2f \n", totalComJuros);

    return 0;
}