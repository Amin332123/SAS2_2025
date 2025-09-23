#include <stdio.h>

int main() {
    float Age , type , N_a ; float prime = 600.0; 
    printf("Entrer Âge du conducteur (en années) : ");
    scanf("%f", &Age);
    
    printf("Entrer Type de voiture : ");
    printf("\n1. sportive\n2. utilitaire\n3. familiale\n");
    printf("Entrer ici : ");
    scanf("%f", &type);
    
    printf("Entrer le  Nombre d'accidents au cours des 5 dernières années : ");
    scanf("%f", &N_a);
    
    if (Age < 25.0) {
        prime *= 1.5; 
    } else if (Age >= 25 && Age <= 65) {
        
    } else if (Age > 65) {
        prime *= 1.2;
    } 
    
    if (type == 1.0) {
        prime *= 2;
    }
    
    else if (type == 2.0) {
        prime *= 1.2;
    }
    else if (type == 3.0) {
        prime *= 1.1;
    }
    if (N_a > 1) {
        prime += (3 * prime / 10);
    }
    
    printf("Le prime ==> %.2f ", prime);
    
    return 0;
    
}



