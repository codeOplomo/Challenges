#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    printf("Entrez un nombre a miltupliez:\n");
    scanf("%d", &x);

    printf("Le tableau de multiplication de %d est: \n", x);
    for(int i = 0; i <= 10; i++)
        printf("%d * %d = %d \n", x, i, x*i);

    return 0;
}
