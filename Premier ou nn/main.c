#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, test=0;

    printf("Entrez un nombre:\n");
    scanf("%d", &num);

    for(int i = 2; i<= num/2; i++){
        if(num % i == 0){
           test = 1;
           break;
        }
    }

    if(test == 1)
        printf("Le nombre %d n'est pas premier", num);
    else
        printf("Le nombre %d est premier", num);

    return 0;
}
