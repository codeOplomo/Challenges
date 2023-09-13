#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmbr;
    printf("Veuillez entrer un nombre entier\n");
    scanf("%d",&nmbr);
    printf("La valeur equivalente de ce nombre en Octal est: %o \n",nmbr);
    printf("La valeur equivalente de ce nombre en Hexadecimal est: %x",nmbr);
    return 0;
}
