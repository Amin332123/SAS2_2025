#include <stdio.h>
int main() {
   float Salaire , heures ; int poste ;
   const float  hours_p_month = 160.00;
   printf("Entrer Salaire de base (€) : ");
   scanf("%f",&Salaire);
   const float x = Salaire;
   printf("Entrer Nombre d'heures supplémentaires : ");
   scanf("%f", &heures);
   printf("Type de poste : \n");
   printf("1. junior \n2. senior \n");
   printf("Entrer ton reponse : ");
   scanf("%d", &poste);
   if (heures >= 1) {
       float prix = (heures *( Salaire/ 160.0)) *1.5;
       if (poste == 2) {
       Salaire = Salaire + (Salaire / 5);
       } else if (poste == 1) {
       Salaire = Salaire + (Salaire / 10);
       }
       printf("=> Salaire : %.2f €/h\n", Salaire );
       printf("=> prix de heures  supplémentaires par jours    :%.2f €/h",prix);
       }
   return 0;
}
