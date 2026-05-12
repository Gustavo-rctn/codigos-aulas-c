#include <stdio.h>

int main() {
    float valorLancheRodeio =  0;
    float valorBatataGrande = 0;
    float valorRefri = 0;
    float valorSobremesa = 0;

    printf("Qual o valor do lanche?");
    scanf("%f", &valorLancheRodeio);

    printf("Qual o valor da batata ?");
    scanf("%f", &valorBatataGrande);

    printf("Qual o valor do refrigerante ?");
    scanf("%f", &valorRefri);

    printf("Qual o valor da sobremesa ?");
    scanf("%f", &valorSobremesa);

    float total = valorLancheRodeio + valorRefri + valorSobremesa + valorBatataGrande;

    if ( total < 40){
        printf("This is barato R$ %.2f", total);
    } else if (total >= 40 && total <= 55){
        printf("Da pra paga mas ta meio pa\n");
    } else if (total > 55){
        printf("Essa fita ta cara slk, chapou o globo");
    }

    printf("O valor ficou: R$ %.2f", total);
    
    
    

    return 0;
}