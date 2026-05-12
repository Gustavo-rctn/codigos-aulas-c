#include <stdio.h>
#include <stdbool.h>

int main () {
    bool comprouIngressoAntes = false;
    bool comprouIngressoNaHora = false;
    bool comprouIngresso = false;
    int comprou = 0;

    printf("Comprou na antes? 1->Sim, 0->Nao");
    scanf("%d", &comprouIngressoAntes);

    printf("Comprou na hora? 1->Nao, 0->Sim");
    scanf("%d", &comprouIngressoNaHora);

    comprouIngressoNaHora = comprou;
    
    if (comprouIngressoAntes || comprouIngressoNaHora  || comprouIngresso)
    {
        printf("Vai assistir o show !!!");
    } else {
        printf("Nao vai assistir o show");
    }
    
    
    return 0;
}