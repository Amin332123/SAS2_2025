
#include <stdio.h>
struct personne {
    char nom[50];
    char prenom[50];
    float note[5];
    
};
int main() {
    struct personne p1 ;
    printf("Entrer le nom : ");
    scanf(" %[^\n]", p1.nom);
    printf("Entrer le prenom : ");
    scanf(" %[^\n]", p1.prenom);
    
    printf("Entrer your notes : \n");
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("=> n%d : ", i + 1);
        scanf("%f", &p1.note[i]);
    }
    
    printf("=> nom : %s \n=> prenom : %s \n=> les notes : \n", p1.nom , p1.prenom);
    for (int i = 0 ; i < 5 ; i++)
    {
        printf("==>  n%d : %d\n",i + 1 ,  p1.note[i]);
    }
    return 0;
}