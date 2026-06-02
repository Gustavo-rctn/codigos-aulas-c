#include <stdio.h>
#include <locale.h>

void ola()
{
    printf("seja bem-vindo!");
}

void calcularMedia(float n1, float n2)
{
    float media = (n1 + n2) / 2;
    printf("\nA média é: %.2f", media);
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ola(); // executando a função

    float n1 = 0;
    float n2 = 0;

    printf("\nQual a primeira nota?");
    scanf("%f", &n1);

    printf("Qual a segunda nota?");
    scanf("%f", &n2);

    calcularMedia(n1, n2);
}