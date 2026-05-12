#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "");

    char nome[10] = "";
    char logradouro[20] = "";
    char cidade[11] = "";
    char uf[2] = "";
    char SENAI[10] = "";
    char SESI[10] = "";

    printf("---Minhas informações residenciais---");
    printf("");
    printf("\n logradouro: %s", logradouro);
    scanf("Qual cidade ? %s", cidade);
    printf("\nCidade: %s", cidade);
    scanf("Qual é o estado ? %s", uf);
    printf("\nUF: %s", uf);
    

    return 0;
}