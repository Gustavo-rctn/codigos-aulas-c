/*Crie o arquivo nota.c e coloque
a lógica para verificar se a nota final
do aluno é maior que 6.9, se for aprovado*/

#include <stdio.h>

int main(){
   int atv1 = 0;
    int atv2 = 0;
    int atv3 = 0;

    printf("Qual foi sua nota na atividade 1?");
    scanf("%i", &atv1);

    printf("Qual foi sua nota na atividade 2?");
    scanf("%i", &atv2);

    printf("Qual foi a sua nota na atividade 3?");
    scanf("%i", &atv3);

    int nota_final = (atv1 + atv2 + atv3)/3;

    if (nota_final>6.9){
        printf("Voce foi aprovado, parabens");
    } else {
        printf("Reprovado, mals");
    }

    return 0;


}