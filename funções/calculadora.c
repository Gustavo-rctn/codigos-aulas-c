#include <stdio.h>

float calcular(int identificador, float num1, float num2)
{
    if (identificador == 1)
    {
        return num1 + num2;
    }
    else if (identificador == 2)
    {
        return num1 - num2;
    }
    else if (identificador == 3)
    {
        return num1 * num2;
    }
    else if (identificador == 4)
    {
        return num1 / num2;
    }

    return 0;
}

int main()
{
    int identificador;
    float num1, num2, resultado;

    printf("Escolha uma operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite a opcao: ");
    scanf("%d", &identificador);

    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    resultado = calcular(identificador, num1, num2);

    printf("Resultado: %.2f\n", resultado);

    return 0;
}