#include <stdio.h>
int main() {
    char nom[30] , prenom[30] , sexe[10] , email[30] ;
    int age ; 
    printf("Entrer le nom : ");
    scanf("%s" , &nom);
    printf("Entrer le prénom : ");
    scanf("%s", &prenom);
    printf("Entrer l\'age : ");
    scanf("%d", &age);
    printf("Entrer le sexe  (M/F) : ");
    scanf("%s", &sexe);
    printf("\nEntrer email  : ");
    scanf("%s", &email);
    printf("Tes informations : \n");
    printf("=> Nom : %s\n", nom);
    printf("=> Prénom  : %s\n", prenom);
    printf("=> Age : %d\n", age);
    printf("=> Sexe : %s\n", sexe);
    printf("=> email : %s\n", email);
    return 0;
}