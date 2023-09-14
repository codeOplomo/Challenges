#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;

    printf("Entrez un caractere:\n");
    scanf("%c", &car);

    if(car >= 65 && car <= 90)
        printf("le caractere donne est un alphabet majuscule");
    else
        printf(" le caractere donne n'est pas un alphabet majuscule");

    return 0;
}
