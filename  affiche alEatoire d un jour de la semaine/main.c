#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d = 0;
    //srand(time(NULL));
    d = (rand() % 7);

    switch(d){
        case 1: printf("LUNDI"); break;
        case 2: printf("MARDI"); break;
        case 3: printf("MERCREDI"); break;
        case 4: printf("JEUDI"); break;
        case 5: printf("VENDREDI"); break;
        case 6: printf("SAMEDI"); break;
        case 7: printf("DIMANCHE"); break;
    }

    return 0;
}
