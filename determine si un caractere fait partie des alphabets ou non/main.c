#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;

    printf("Entrez un caractere:\n");
    scanf("%c", &car);

    if(car >= 65 && car <= 90)
        printf("Ce caractere fait partie des alphabets et il'est en majuscule");
    else if(car >= 97 && car <= 123)
        printf("Ce caractere fait partie des alphabets et il'est en miniscule");
    else printf("Ce caractere n'est pas une alphabet");

    return 0;
}
