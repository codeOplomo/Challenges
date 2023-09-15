#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, somme, max = 0;

    printf("Entrez les elements de cette serie: \n");

    somme = 0;

        do{
            scanf("%d", &x);
        if(x <= 100 && x > 0){
            somme = somme + x;
            if(max < x)
                max = x;
        }
        else if(x == 0){
            printf("La somme des elements de cette serie sont: %d \n", somme);
            printf("Le MAX des elements de cette serie est: %d \n", max);
        }

    }while(x != 0);

    return 0;
}
