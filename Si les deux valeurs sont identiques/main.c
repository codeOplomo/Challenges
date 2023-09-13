#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, som=0;

    printf("Entrez la valeur de a et b:\n");
    scanf("%d %d", &a, &b);
    som = a + b;

    if(a == b)
        printf("Les valeurs sont identique. Le triple de leur somme est: %d",som * 3);
    else
        printf("Les valeurs ne sont pas identique. Leur somme est: %d", som);

    return 0;
}
