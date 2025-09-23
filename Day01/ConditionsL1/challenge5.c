#include <stdio.h>

int main() {
    int année, mois , jours , heures , minutes , secondes;
    printf("année : ");
    scanf("%d", &année);
    mois = année * 12 ;
    jours = année * 365;
    heures = jours * 24;
    minutes = heures * 60;
    secondes = minutes * 60;
    printf("=> %d mois \n=> %d jours \n=> %d heures \n=> %d minutes \n=> %d secondes\n",mois,jours,heures,minutes,secondes);
    return 0;
    
}



