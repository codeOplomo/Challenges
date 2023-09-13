#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nmbr, invNmbr, mod, div;
    printf("Veuillez entrer un nombre a trois chiffre\n");
    scanf("%d",&nmbr);

    invNmbr = 0;
    mod = 0;
    div = nmbr;

    mod = div % 10;
    invNmbr = invNmbr * 10 + mod;
    div = div / 10;
    mod = div % 10;
    invNmbr = invNmbr * 10 + mod;
    div = div / 10;
    mod = div % 10;
    invNmbr = invNmbr * 10 + mod;

    printf("Votre nombre est: %d \nSon inverse est: %d", nmbr, invNmbr);

    return 0;
}
