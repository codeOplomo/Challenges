#include <stdio.h>
#include <stdlib.h>

int main()
{
    char car;
    printf("Veuillez entrer un caractere\n");
    scanf("%c",&car);
    switch(car){
        case 'a': printf("\nUne voyelle");
                        break;
        case 'e': printf("\nUne voyelle");
                        break;
        case 'y': printf("\nUne voyelle");
                        break;
        case 'u': printf("\nUne voyelle");
                        break;
        case 'i': printf("\nUne voyelle");
                        break;
        case 'o': printf("\nUne voyelle");
                        break;
        case 'A': printf("\nUne voyelle");
                        break;
        case 'E': printf("\nUne voyelle");
                        break;
        case 'Y': printf("\nUne voyelle");
                        break;
        case 'U': printf("\nUne voyelle");
                        break;
        case 'I': printf("\nUne voyelle");
                        break;
        case 'O': printf("\nUne voyelle");
                        break;
        default: printf("\nN'est pas une voyelle");

    }
    return 0;
}
