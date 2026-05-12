#include <stdio.h>

int main(){
    printf("Vamos calcular as notas do aluno");

    int qtdeNotas = 0;
    double nota = 0;
    double totalNotas = 0;
    double mediaFinal = 0;
    printf("Quantas notas deseja calcular?");
    scanf("%i", &qtdeNotas);

    for (int i=0; i < qtdeNotas; i++) {
        printf("Qual a nota aluno");
        scanf("%lf", &nota);


        totalNotas = totalNotas + nota;
    }
    mediaFinal = totalNotas / qtdeNotas;

    printf("A media final é %2.lf", mediaFinal);

    if (mediaFinal >= 5) {
        printf("\n Aprovado");
    } else {
        printf("\n Reprovado");
    }
    
}