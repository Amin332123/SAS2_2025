#include <stdio.h>
int main() {
    float C_délectricité, facture ;
    int T_d_utilisateur, T_d_contrat;
    printf("Entrer Consommation d'électricité (en kWh) : ");
    scanf("%f", &C_délectricité);
    printf("Type d'utilisateur : ");
    printf("\n1. résidentiel \n2. commercial\n");
    printf("Entrer ton réponse : ");
    scanf("%d", &T_d_utilisateur);
    printf("Entrer Type de contrat : ");
    printf("\n0. standard \n1. réduit\n");
    printf("Entrer ton reponse : ");
    scanf("%d", &T_d_contrat);
    if (T_d_utilisateur == 1) {
        if (T_d_contrat == 0) {
            facture = C_délectricité * 0.20;
        } else if (T_d_contrat == 1) {
            facture = C_délectricité * 0.15;
        }
    }
    if (T_d_utilisateur == 2) {
        if (T_d_contrat == 0) {
            facture = C_délectricité * 0.30;
        } else if (T_d_contrat == 1) {
            facture = C_délectricité * 0.25;
        }
    }
    
    if (C_délectricité > 500 ) {
        facture = facture + ((C_délectricité * 10.0) / 100.0 );
    }
    printf("Facture : %.2f Dh", facture);
    return 0;
}

