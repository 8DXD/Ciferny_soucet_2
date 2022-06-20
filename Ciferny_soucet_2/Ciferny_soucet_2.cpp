#include <stdio.h>

int main()
{
    int soucet = 0;
    int cislo;
    printf("Zadejte cislo, jehoz ciferny soucet chcete vypocitat: ");
    scanf_s("%d", &cislo);
    while (cislo > 0) {
        soucet += (cislo % 10);
        cislo /= 10;
    }
    printf("\nCiferny soucet: %d", soucet);
}
