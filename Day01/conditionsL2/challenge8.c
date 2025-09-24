#include <stdio.h>
int main() {
   int age , H_médical ;
   printf("Entrer ton age : ");
   scanf("%d", &age);
   printf("Historique médical : \n");
   printf("0. aucun problème \n1. problème mineur \n2. problème majeur\n");
   printf("Entrer ton réponse : ");
   scanf("%d", &H_médical);
   if (age < 30) {
       printf("Plan de base\n");
   } else if (age >= 30 && H_médical == 0) {
       printf("Plan de base\n");
   } else if (age >= 30 && H_médical >= 1) {
       printf("Plan étendu\n");
       if (H_médical == 2) {
           printf("vous recevrez 200 € chaque mois");
       }
   } 
   return 0;
}