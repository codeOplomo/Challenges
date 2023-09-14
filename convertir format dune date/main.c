#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day, month, year;
    char newMonth[10];

    printf("Entrez une date dd/mm/YYYY\n");
    scanf("%d %d %d", &day, &month, &year);

    switch(month){
        case 1: strcpy(newMonth, "Janvier");
                   break;
        case 2: strcpy(newMonth, "Fevrier");
                   break;
        case 3: strcpy(newMonth, "Mars");
                   break;
        case 4: strcpy(newMonth, "Avril");
                   break;
        case 5: strcpy(newMonth, "Mai ");
                   break;
        case 6: strcpy(newMonth, "Juin");
                   break;
        case 7: strcpy(newMonth, "Juillet");
                   break;
        case 8: strcpy(newMonth, "Auot");
                   break;
        case 9: strcpy(newMonth, "Septembre");
                   break;
        case 10: strcpy(newMonth,"Octobre");
                   break;
        case 11: strcpy(newMonth, "Novembre");
                   break;
        case 12: strcpy(newMonth, "Decembre");
                   break;
        default: strcpy(newMonth, "False");
                   }

    if(strcmp(newMonth,"False") != 0)
    printf("La nouvelle date est: %d/ %s/ %d", day, newMonth, year);
    else printf("Mois non valide");

    return 0;
}
