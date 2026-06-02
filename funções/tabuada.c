# include <stdio.h>
#include <locale.h>

void recepcao () {
    printf("Bem-Vindo!");
}

int main(){


    setlocale(LC_ALL, "Portuguese");

    int tabuada = 0;
    int resultado = 0;

    printf("Qual tabuada c quer?");
    scanf("%i", &tabuada);

for (int i = 8; i < 12; i++)
{
    resultado = tabuada * i;
    printf("\n %i x %i = %i", tabuada, i, resultado);
}

recepcao();


}