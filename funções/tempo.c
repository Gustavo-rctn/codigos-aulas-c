#include <stdio.h>

int calcularHorasCurso(int horasPorMes, int quantidadeSemestres)
{
    int totalHoras;

    totalHoras = horasPorMes * 5 * quantidadeSemestres;

    return totalHoras;
}

int main()
{
    int horasPorMes;
    int quantidadeSemestres;

    printf("Digite a quantidade de horas por mes: ");
    scanf("%d", &horasPorMes);

    printf("Digite a quantidade de semestres do curso: ");
    scanf("%d", &quantidadeSemestres);

    printf("Total de horas do curso: %d\n",
           calcularHorasCurso(horasPorMes, quantidadeSemestres));

    return 0;
}