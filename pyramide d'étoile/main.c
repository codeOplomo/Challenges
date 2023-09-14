#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nLigne, i ,j;

    printf("Entrez le nombre des lignes\n");
    scanf("%d",&nLigne);
    printf("\n");

    for(i = 0; i < nLigne; i++){
        for(j = 0; j < 2*nLigne; j++){
            if(j >= nLigne - i && j <= nLigne + i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
