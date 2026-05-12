# include <stdio.h>

int main(){
    int tabuada = 0;
    int resultado = 0;

    printf("Qual tabuada c quer?");
    scanf("%i", &tabuada);

for (int i = 0; i < 10; i++)
{
    resultado = tabuada * i;
    printf("\n %i x %i = %i", tabuada, i, resultado);
}

}