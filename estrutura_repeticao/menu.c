#include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("Digite um numero ou 0 para sair");
        scanf("%i", &numero);
    }
    while (numero !=0);
    printf("Fim.");
    
    
}