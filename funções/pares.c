#include <stdio.h>

void mostrarPares(int inferior, int superior)
{
    for (int i = inferior; i <= superior; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int inferior, superior;

    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);

    printf("Digite o limite superior: ");
    scanf("%d", &superior);

    printf("\nNumeros pares:\n");
    mostrarPares(inferior, superior);

    return 0;
}