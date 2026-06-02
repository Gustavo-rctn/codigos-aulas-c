#include <stdio.h>
#include <locale.h>

int main()
{
    char nome = 30;
    int tipoArea = 0;
    float circulo = 0;
    float quadrado = 0;

    printf("Qual o seu nome?");
    scanf("%s", &nome);

    do
    {
        printf("Qual o tipo de area que voce quer procurar?\n");
        printf("CIRCULO [1]\n");
        printf("QUADRADO [2]\n");
        printf("Digite sua opcao\n");

        scanf("%i", &tipoArea);

        if (tipoArea != 1 && tipoArea != 2)
        {
            printf("Opcao invalida! Tente novamente \n\n");
        }

        if (tipoArea == 1) // conta do circulo
        {
            printf("Qual a medida do raio ?\n");
            scanf("%f", &circulo);

            float areaCirculo = 3.14 * circulo * circulo;

            printf("A area do circulo e: %.2f\n", areaCirculo);
        } else
        {
            printf("Qual a medida dos lados ?\n");
            scanf("%f", &quadrado);

           float areaQuadrado = quadrado * quadrado ;

            printf("A area do quadrado e: %.2f\n", areaQuadrado);

        }

    } while (tipoArea != 1 && tipoArea != 2);

    printf("\n");
}