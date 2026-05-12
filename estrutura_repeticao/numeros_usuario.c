#include <stdio.h>

int main() {
    int numeroInicio = 0;
    int numeroFim = 0;

    printf("digite um numero maior ou igual a 0:");
    scanf("%i", &numeroInicio);


    if (numeroInicio < 0)
    {
        printf("Numero invalido, fim");
    } else {
        printf("Qual o numero final maior que %i:", numeroInicio);
        scanf("%i", &numeroFim);
    }
    
    if (numeroFim >= numeroInicio)
    {
        //continuar roda o for  
        for (int i = 0; i <= numeroFim; i++)
        {
            printf("\n Numero %i", i);
        }
        
    } else {
        //numero menor ou igual ao inicio

        printf("Numeros invalidos, fim\n");
        printf("Inicio %i, Fim %i",numeroInicio, numeroFim );
    }
    



    

}