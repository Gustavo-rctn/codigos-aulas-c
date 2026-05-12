#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    char nome[10] = "Gustavo";
    char logradouro[20] = "Rua Anna Morales Chil";
    char cidade[11] = "Piracicaba";
    char uf[2] = "SP";

    printf("---Minhas informações residenciais---");
    printf("\n logradouro: %s", logradouro);
    printf("\nCidade: %s", ciade);
    printf("\nUF: %s", uf);

    return 0;
}