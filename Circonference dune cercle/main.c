#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r, cir = 0;
    const float pi = 3.14;
    printf("Veuillez donner le rayon du cercle \n");
    scanf("%f", &r);

    cir = 2*pi*r;

    printf("La circonference du cercle est %.2f",cir);
    return 0;
}
