#include <stdio.h>
int main() {
    float longueur , largeur;
    printf("Entrer la longeur : ");
    scanf("%f", &longueur);
    printf("Entrer la largeur : ");
    scanf("%f", &largeur);
    float Surface = longueur * largeur;
    printf("La surface est : %.2f ", Surface);
    return 0;
}