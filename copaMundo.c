#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    char grupoBrasil[4][50];
    int resultados[3]
    int totalPontosBrasil = 0;

    printf("--Vamos preencher o grupo do Brasil na Copa");

    for (int i=0; i < 4; i++)
    {
        printf("\nQual selecao?");
        scanf("%s", grupoBrasil[i]);
    }

    printf("\n--Legal, agora vamos para os resultados dos jogos--");
   
    for (int i=0; i < 3; i++)
    {
        printf(
            "\nPartida %i: %s x %s", i+1,
            grupoBrasil[0], grupoBrasil[i+1]
        );
        scanf("%%i x %i", &resultados[i][0], &resultados[i][1]);
    }

//Imprimindo os resultados
    for (int i=0; i < 3; i++)
    {
        printf(
            "\n%s %i x %i %s",
            grupoBrasil[0], resultados[0][i],
            resultados[i+1][1], grupoBrasil[i+1]
        );
    }

    if (resultados[i][0] > resultados[i][0]) {
        totalPontosBrasil += 3;
    }

    if (resultados[i][0] == resultados[i][1]) {
        totalPontosBrasil +=1;
    }

    printf("\n O Brasil fez %i ponts", totalPontosBrasil);
   
    return 0;
}