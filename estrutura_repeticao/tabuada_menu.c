# include <stdio.h>

int main(){
    int tabuada = 4;
    int res= 0;
    int i = 0;

    do{
        printf("digite o numero da tabuada ou 0 para sair");
        scanf("%i", &tabuada);

        while (i <=10)
        {
            res = i * tabuada;
            printf("\n%i x %i = %i", tabuada, i, res);
            i++;
        }
        i=0;
        
    }while (tabuada != 0);

}