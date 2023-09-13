#include <stdio.h>
#include <stdlib.h>

int main()
{
    int an, opt;

    printf("Entrez une annee a convertir\n");
    scanf("%d", &an);
    printf("Methode de convertion:\n");
    printf("1- Mois\n2- Jours\n3- Heures\n4- Minutes\n5- Seconds\n");
    printf("Entrez le nombre de la methode\n");
    scanf("%d", &opt);

    switch(opt){
       case 1: printf("Convertion en Mois: %d", an * 12);
            break;
       case 2: printf("Convertion en Jours: %d", an * 365);
            break;
       case 3: printf("Convertion en Heurs: %d", an * 365 * 24);
            break;
       case 4: printf("Convertion en Minutes: %d", an * 365 * 24 * 60);
            break;
       case 5: printf("Convertion en Seconds: %d", an * 365 * 24 * 60 * 60);
            break;
       default: printf("Option non diponible");
    }

    return 0;
}
