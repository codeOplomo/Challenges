#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
        int a, b, c;
        float x1, x2, delta;

        printf("a*x*x + bx + c = 0\n");
        printf("Entrez les valeurs de a, b et c\n");
        scanf("%d %d %d", &a, &b, &c);

        delta = (b * b) - 4*a*c;

        if(delta > 0){
            x1 = (-b - sqrt(delta))/2 * a;
            x2 = (-b + sqrt(delta))/2 * a;
            printf("Les solution de cette equation sont: x1 = %.2f et x2 = %.2f", x1, x2);
        } else if(delta == 0){
            x1 = (-b)/2 * a;
            printf("La solution de cette equation est: x = %.2f", x1);
        }else{
            printf("Cette equation n'a pas de solution en R");
        }
        return 0;
    }
