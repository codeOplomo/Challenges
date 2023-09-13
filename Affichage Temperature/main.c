#include <stdlib.h>
#include <stdio.h>

int main(){

        float tempF, tempC;

        tempC = 0;
        printf("veulliez entrez la degree de temperature en Fahrenheit ");
        scanf("%f", &tempF);
        tempC =(tempF - 32)/1.8;

        printf("La temperature en Celsius est %.2f C \n", tempC);

        if(tempC <= 0)
            printf("Tres froid");
        else if(tempC > 0 && tempC <= 15)
            printf("Froid");
        else if(tempC > 15 && tempC <=30)
            printf("Chaud");
        else printf("Tres chaud");

    return 0;
}
