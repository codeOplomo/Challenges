#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Donnez les valeurs de a et b: ");
    scanf("%d %d", &a, &b);

    printf("La somme: a + b = %d \n", a+b);
    printf("La soustraction: a - b = %d \n", a-b);
    printf("La multiplication: a * b = %d \n", a*b);
    printf("La division: a / b = %d \n", a/b);
    printf("Le reste: a % b = %d \n", a%b);

    return 0;
}
