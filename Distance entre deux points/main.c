#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float mX, mY, nX, nY, distance;

    printf("Donnez les cordonnees x et y de la premiere point\n");
    scanf("%f %f",&mX, &mY);
    printf("Donnez les cordonnees x et y de la deuxieme point\n");
    scanf("%f %f",&nX, &nY);

    distance = sqrt(pow((nX - mX),2) + pow((nY - mY),2));

    printf("La distance entre x et y est %.2f", distance);
    return 0;
}
