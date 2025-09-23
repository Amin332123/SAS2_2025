#include <stdio.h>

int main() {
    int R_v , S_c , D_p ; 
    printf("Entrer Revenu annuel (en euros) :");
    scanf("%d", &R_v);
    
    printf("Entrer Score de crédit  :");
    scanf("%d", &S_c);
    
    printf("Entrer Durée du prêt (en années) :");
    scanf("%d", &D_p);
    
    if (R_v >= 30e3 && S_c >= 7e2 && D_p <= 10 ) {
        printf("Éligible");
    } else if (R_v >= 30e3 && S_c >= 650 && D_p <= 15 ) {
        printf("Éligible avec conditions");
    } else if (R_v < 30e3 || S_c < 650 && D_p > 15 ) {
        printf("Non éligible");
    }
    
    
    return 0;
    
}


