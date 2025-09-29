
#include <stdio.h>
struct personne {
    char nom[50];
    char prenom[50];
    int age;
    
};
int main() {
    struct personne p1 = {"Rahmni" , "Mohamed Amine", 18};
    printf("=> nom : %s \n=> prenom : %s\n=> age : %d", p1.nom , p1.prenom , p1.age);
    return 0;
}