#include <stdio.h>

int main() {
    int N_t , N_u , S_l ; float  J_r;
    printf("Entrer Nombre total de jours de congés accordés : ");
    scanf("%d", &N_t);
    printf("Entrer Nombre de jours de congés utilisés : ");
    scanf("%d", &N_u);
    printf("Statut de l'employé : \n");
    printf("0. temps partiel \n1. temps plein\n");
    printf("Entrer le nombre ici : ");
    scanf("%d", &S_l);
    if (S_l == 1) {
        J_r = N_t -  N_u ;
    } else if (S_l == 0) {
        J_r =  (N_t / 2) - N_u ;
    }
    if (N_u > N_t) {
        printf("Alerte");
    }
    printf("Les jours restants => %.1f jours", J_r);
    return 0;
    
}
