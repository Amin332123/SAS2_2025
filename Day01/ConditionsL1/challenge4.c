#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c;
    printf("Entrer a : ");
    scanf("%f",  &a);
    printf("Entrer b : ");
    scanf("%f",  &b);
    printf("Entrer c : ");
    scanf("%f",  &c);
    int delta = pow(b , 2) - (4 * a * c);
    float x1 = (-b + sqrt(delta)) / 2 * a;
    float x2 = (-b -  sqrt(delta)) / 2 * a;
    
    if (delta == 0) {
        printf("on a une seul solution : x = %.2f", -b / (2*a));
    } else if (delta > 0) {
        printf("on a deux solutions : \nx1 = %.3f\nx2 = %.3f", x1, x2 );
    } else if (delta < 0) {
        printf("pas de solution");
    }
    return 0;
}

