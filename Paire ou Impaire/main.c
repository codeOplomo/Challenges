#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Veuillez entrer un nombre\n");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("\n%d est un nombre pair",num);
    else
        printf("\n%d est un nombre impair",num);

    return 0;
}
