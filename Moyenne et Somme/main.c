#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, moye, som;
    moye = 0;
    som = 0;
    printf("Entrez la valeur de a, b, c,et d: \n");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    som = a+b+c+d;
    moye = som/4;
    printf("La somme des 4 nombres est %.2f \n", som);
    printf("La moyenne des 4 nombres est %.2f",moye);

    return 0;
}
