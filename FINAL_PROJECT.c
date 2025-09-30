// Gestion d’un Zoo
#include <stdio.h>
#define max 200
typedef struct {
    char nom[20];
    char espece[20];
    int age;
    char habit[20];
    float poids;
    

} Animal;

Animal A[max]; // aadeed line
int nb_animal = 20;
int id = 20; 
Animal A[max] = {
       {"Simba", "Lion", 5 , "Savane" , 190.5},
       {"Nala", "Lion", 4 , "Savane" , 175},
       {"Sherekhan" , "Tigre", 8 , "Jungle" , 220.3},
       {"Raja" , "Éléphant", 15 , "Savane" , 540.7},
       {"Marty" , "Zèbre", 6 , "Savane" , 300.2},
       {"Gloria" , "Hippopotame", 10 , "Rivière" , 450},
       {"Alex" , "Lion", 7 , "Savane" , 200},
       {"Julien" , "Lémurien", 3 , "Jungle" , 12.5},
       {"Melman" , "Girafe", 9 , "Savane" , 390.8},
       {"Timon" , "Suricate", 2 , "Désert" , 1.2},
       {"Pumbaa" , "Phacochère", 5 , "Savane" , 120},
       {"Scar" , "Lion", 11 , "Savane" , 210.4},
       {"Kaa" , "Serpent", 6 , "Jungle" , 45},
       {"Iko" , "Perroquet", 4 , "Jungle" , 2.1},
       {"Dumbo" , "Éléphant", 3 , "Savane" , 320},
       {"KIM" , "Chien sauvage", 7 , "Savane" , 25},
       {"Donatello" , "Tortue", 40 , "Rivière" , 90.5},
       {"Polly" , "Oiseau", 5 , "Jungle" , 1.5},
       {"Kong" , "Gorille", 13 , "Jungle" , 180},
};
void Menu() {
    printf("\n\n============== Gestion d\'un Zoo ==============\n\n");
    printf("1.  Ajouter un animal\n");
    printf("2.  Afficher les animaux\n");
    printf("3.  Modifier un animal\n");
    printf("4.  Supprimer un animal\n");
    printf("5.  Rechercher un animal\n");
    printf("6.  Statistiques\n");
    printf("7.  quitter le programme\n");


}


void  Ajouter() {
    int j_choix;
    
    printf("\n=== Ajouter un animal ===\n");
    printf("1. Ajouter un seul animal\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    scanf("%d", &j_choix);
    switch (j_choix) {
        case 1 :
            printf("Entrer le nom : ");
            scanf(" %[^\n]", A[nb_animal].nom);

            printf("Entrer le espèce : ");
            scanf(" %[^\n]", A[nb_animal].espece);

            printf("Entrer age : ");
            scanf("%d", &A[nb_animal].age);

            printf("Entrer le habitat : ");
            scanf(" %[^\n]",  A[nb_animal].habit);

            printf("Entrer le poids : ");
            scanf("%f", &A[nb_animal].poids);

            nb_animal++;
            printf("ton Id = %d", ++id);
            break;

        case 0 :
            return;
            break;
    }



}


void  Afficher() {
    int af_choix;
    printf("\n=== Modifier un animal ===\n");
    printf("1. Afficher la liste complète\n");
    printf("2. Trier par nom\n");
    printf("3. Trier par âge\n");
    printf("4. Afficher uniquement les animaux d\'un habitat spécifique\n");
    printf("Entrer : ");
    scanf("%d", &af_choix);
    switch (af_choix) 
    {
        case 1 :  
            for (int i = 0 ;i < nb_animal ; i++)
            {
                printf("\n\n==== Animal %d ==== \n\n", i + 1);
                printf("=> Nom : %s \n", A[i].nom);
                printf("=> Espèce : %s \n", A[i].espece);
                printf("=> Age : %d \n", A[i].age);
                printf("=> Habit : %s \n", A[i].habit);
                printf("=> Poids : %.2f \n", A[nb_animal].poids);

            }
            break;
        // case 2 :  
            
        //     break;
        // case 3 :  
            
        //     break;
        // case 4 :  
            
        //     break;
        // case 0 :  
            
        //     break;
       
    }
    

     
}


void  Modifier() {
    
}


void  Supprimer() {
    
}


void  Rechercher() {
    
}


void  Statistiques() {
    
}

int main() {
    while (2)
    {

        int m_choix;
        Menu();
        printf("Entrer le choix : ");
        scanf("%d", &m_choix);
        switch(m_choix) 
        {
            case 1 : 
                Ajouter();
                break;
                
            case 2 : 
                Afficher();
                break;
    
    
            case 3 : 
                Modifier();
                break;
    
    
            case 4 :
                Supprimer(); 
                break;
    
    
            case 5 : 
                Rechercher();
                break;
    
    
            case 6 : 
                Statistiques();
                break;
    
        }
        return 0;
    }

}