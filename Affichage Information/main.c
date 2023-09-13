#include <stdio.h>
#include <stdlib.h>


int main(){

int age;
char nom[15], prenom[15];
char sexe;
char numTel[10];

    printf("Donnez votre nom et prenom ");
    scanf(" %s %s",nom, prenom);
    printf("Donnez votre age ");
    scanf("%d", &age);
    printf("Passez votre numero de telephone ");
    scanf(" %s", numTel);
    printf("Votre sexe: M/F ");
    scanf(" %c", &sexe);

    if(sexe == 'M'){
        printf("Bonjour Monsieur ");}
    if(sexe == 'F'){
        printf("Bonjour Madame ");}

    printf(" %s %s /n Vous avez %d /n Votre numero de telephone est %s", nom, prenom, age, numTel);

    return 0;
}
