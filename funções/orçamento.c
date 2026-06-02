#include <stdio.h>

float calcularTotal()
{
    float placaVideo = 139.90;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;

    float total;

    total = placaVideo + caixaSom + kitMouseTeclado + monitor;

    return total;
}

int main()
{
    float valorTotal;
    float valorComDesconto;
    float valorParcela;

    int quantidadePessoas = 6;

    valorTotal = calcularTotal();

    valorComDesconto = valorTotal - (valorTotal * 0.15);

    valorParcela = valorTotal / 12;

    printf("ORCAMENTO DO COMPUTADOR \n");

    printf("\nValor total das pecas: R$ %.2f", valorTotal);

    printf("\n\nPagamento a vista:");
    printf("\nValor com 15%% de desconto: R$ %.2f", valorComDesconto);

    printf("\n\nPagamento parcelado:");
    printf("\n12x de R$ %.2f", valorParcela);

    printf("\n\nCompra em grupo (%d pessoas)", quantidadePessoas);

    printf("\nValor por pessoa a vista: R$ %.2f",
           valorComDesconto / quantidadePessoas);

    printf("\nValor por pessoa parcelado: R$ %.2f",
           valorTotal / quantidadePessoas);

    return 0;
}