#include <stdio.h>
#include <stdlib.h>

int main()
{
    float moy;

    printf("Entrez la moyenne obtenu par l'eleve\n");
    scanf("%f", &moy);
    if(moy >= 0 && moy < 10)
        printf("RECALE");
    else if(moy >= 10 && moy <12)
        printf("PASSABLE");
    else if(moy >= 12 && moy < 14)
        printf("ASSEZ BIEN");
    else if(moy >= 14 && moy < 16)
        printf("BIEN");
    else if(moy >= 16 && moy <= 20)
        printf("TRES BIEN!!");
        else printf("Note invalide");

    return 0;
}
