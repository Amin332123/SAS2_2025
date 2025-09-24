#include <stdio.h>
int main() {
    float Budget;
    int Destination , N_personnes;
    
    printf("Entrer ton budget (en euros) : ");
    scanf("%f", &Budget);
    
    printf("Les Destinations : ");
    printf("\n1. la plage\n2. la montagne \n3. la ville\n");
    printf("Entrer votre réponse : ");
    scanf("%d", &Destination);
    
    printf("le nombre de personnes : ");
    scanf("%d", &N_personnes);
    
    if (Budget >= 1000.0) {
        printf("Voyage haut de gamme\n");
        if (N_personnes > 2) {
            printf("Destination : Plage ");
        }
    } else if (Budget >= 500.0 && Budget < 1000.0) {
        printf("Voyage milieu de gamme\n");
    } else if (Budget < 500) {
        printf("Voyage petit budget\n");
    }
    
    if (Budget >= 500.0 && N_personnes <= 2) {
        printf("\nDestination Montagne");
    }
    
    if (Budget > 0 && N_personnes > 0 ) {
        printf("\nDestination Ville");
    }

    return 0;
}

