#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, M_géométrique;
    printf("Entrer a : ");
    scanf("%f", &a);
    printf("\nEntrer b : ");
    scanf("%f", &b);
    printf("\nEntrer c : ");
    scanf("%f", &c);
    float r = a * b * c;
    M_géométrique = pow( r , (1.00 / 3.00));
    printf("La Moyenne géométrique : %.2f ", M_géométrique);
    return 0;
}