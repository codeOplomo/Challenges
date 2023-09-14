#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Entrez un nombre\n");
    scanf("%d", &num);

    if(num < 0)
        printf("Le nombre est negative");
    else if(num > 0)
        printf("Le nombre est positive");
    else
        printf("Le nombre est egal a zero");

    return 0;
}
