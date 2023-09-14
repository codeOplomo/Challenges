#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, numInv, div, count = 0, mod;
    printf("Entrez un nombre\n");
    scanf("%d", &num);

    div = num;
    do{
        div = div / 10;
        count++;
    }while(div != 0);


    div = num;
    // deuxieme methode
    /*
    while(div != 0){
        mod = div % 10;
        numInv = numInv * 10 + mod;
        div = div / 10;
    }
*/
    for(int i = 0; i < count; i++){

        mod = div % 10;
        numInv = numInv * 10 + mod;
        div = div / 10;
    }

    printf("L'inverse du numero %d est: %d",num ,numInv);

    return 0;
}
