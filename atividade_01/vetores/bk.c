#include <stdio.h>

int main()
{
    char lanches [4] [20] = {
        "Rodeio", "Whopper",
        "Cheddar Duplo", "Big King"
    };
    printf("---Meus lanches favortios---");

    for (int i=0; i < 4; i++) {
        printf("\n %s", lanches[i]);

    }

    return 0;
}