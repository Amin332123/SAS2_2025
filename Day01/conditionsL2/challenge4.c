#include <stdio.h>
int main() {
    float Score_de_performance, Ancienneté;
    int Récompenses_reçues;
    printf("Entrer ton Score de performance (de 0 à 100)  : ");
    scanf("%f", &Score_de_performance);
    
    
    printf("Entrer ton Ancienneté (en années) : ");
    scanf("%f", &Ancienneté);
    
    printf("\n==> Récompenses reçues : \n0 pour aucune\n1. pour une\n2. pour deux ou plus\n");
    printf("écrivez votre réponse : ");
    scanf("%d", &Récompenses_reçues);
    
    if (Score_de_performance >= 90 && Ancienneté >= 5 ) {
        printf("Excellente\n");
    }
    else if (Score_de_performance >= 75 && Ancienneté >= 3 ) {
        printf("Bonne\n");
    }
    else if (Score_de_performance >= 50 && Ancienneté < 3 ) {
        printf("Satisfaisante\n");
    }
    else if (Score_de_performance < 50) {
        printf("Insuffisante\n");
    }
    if (Récompenses_reçues == 1) {
        printf("votre salaire augmentera de 10 %%\n");
    } else if (Récompenses_reçues  >= 2) {
        printf("votre salaire augmentera de 20 %%\n");
    }
    return 0;
}

