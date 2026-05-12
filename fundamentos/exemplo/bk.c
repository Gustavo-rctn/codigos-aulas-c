#include <stdio.h>

int main() {
    float rodeio = 29.99;
    float refri = 7.99;
    float batata = 14.99;
    float sorvete = 4.99;
    float cupom = 0.07;

    float total = rodeio + refri + batata + sorvete  ;
    float desconto = (total * cupom);
    float totalDesconto = total - desconto;

    printf("Total a pagar: R$ %.2f \n", total);
    printf("O desconto foi de: R$ %.2f \n", desconto);
    printf("O total a ser pago: R$ %.2f \n", totalDesconto);

    return 0;
}