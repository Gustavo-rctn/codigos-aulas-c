#include <stdio.h>
/*
voce precisa comprar um carro e
pretende realizar o pagamento de 
forma parcelada.
crie um algoritimo que calcule o valor
das parcelas descontando a o valor
da entrada de 30%.
*/
int main() {

    //entrada
    float valorMoto = 0;
    int parcelas = 0;
    const float entrada = 0.3;

    printf("Qual o valor do veiculo?\n");
    scanf("%f", &valorMoto);

    printf("Qual o numero de parcelas?");
    scanf("%i", &parcelas);

    //processamento
    float valorEntrada = valorMoto * entrada;
    float valorRestante = valorMoto - valorEntrada;
    float valorParcelas = valorRestante / parcelas;

    //saída
    printf("Voce pagara por parcela: %.2f\n" , valorParcelas);

    printf("Valor da entrada e %.2f", valorEntrada);




    return 0;
}