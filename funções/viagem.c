#include <stdio.h>

float calcularGasto(float distancia, float consumo, float preco)
{
    float litrosNecessarios;
    float gastoTotal;

    litrosNecessarios = distancia / consumo;
    gastoTotal = litrosNecessarios * preco;

    return gastoTotal;
}

int main()
{
    float distancia;
    float consumoGasolina, precoGasolina;
    float consumoEtanol, precoEtanol;
    float gastoGasolina, gastoEtanol;

    printf("Distancia da viagem (km): ");
    scanf("%f", &distancia);

    printf("\nGASOLINA\n");
    printf("Consumo do carro (km/l): ");
    scanf("%f", &consumoGasolina);
    printf("Preco por litro: R$ ");
    scanf("%f", &precoGasolina);

    printf("\nETANOL\n");
    printf("Consumo do carro (km/l): ");
    scanf("%f", &consumoEtanol);
    printf("Preco por litro: R$ ");
    scanf("%f", &precoEtanol);

    gastoGasolina = calcularGasto(distancia, consumoGasolina, precoGasolina);
    gastoEtanol = calcularGasto(distancia, consumoEtanol, precoEtanol);

    printf("\nGasto com gasolina: R$ %.2f", gastoGasolina);
    printf("\nGasto com etanol: R$ %.2f", gastoEtanol);

    if (gastoGasolina < gastoEtanol)
    {
        printf("\nA gasolina e a opcao mais vantajosa.");
    }
    else if (gastoEtanol < gastoGasolina)
    {
        printf("\nO etanol e a opcao mais vantajosa.");
    }
    else
    {
        printf("\nAs duas opcoes possuem o mesmo custo.");
    }

    return 0;
}