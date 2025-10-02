// Gestion d’un Zoo
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define max 200
typedef struct {
    int id;
    char nom[20];
    char espece[20];
    int age;
    char habit[20];
    float poids;
    

} Animal;

int nb_animal = 20;
int idd = 20; 
Animal A[max] = {
       {1 ,"Simba", "Lion", 5 , "Savane" , 190.5},
       {2,"Nala", "Lion", 4 , "Savane" , 175},
       {3,"Sherekhan" , "Tigre", 8 , "Jungle" , 220.3},
       {4,"Baloo", "Ours", 12 , "Forêt" , 310},
       {5,"Raja" , "Éléphant", 15 , "Savane" , 540.7},
       {6,"Marty" , "Zèbre", 6 , "Savane" , 300.2},
       {7,"Gloria" , "Hippopotame", 10 , "Rivière" , 450},
       {8,"Alex" , "Lion", 7 , "Savane" , 200},
       {9,"Julien" , "Lémurien", 3 , "Jungle" , 12.5},
       {10,"Melman" , "Girafe", 9 , "Savane" , 390.8},
       {11,"Timon" , "Suricate", 2 , "Désert" , 1.2},
       {12,"Pumbaa" , "Phacochère", 5 , "Savane" , 120},
       {13,"Scar" , "Lion", 11 , "Savane" , 210.4},
       {14,"Kaa" , "Serpent", 6 , "Jungle" , 45},
       {15,"Iko" , "Perroquet", 4 , "Jungle" , 2.1},
       {16,"Dumbo" , "Éléphant", 3 , "Savane" , 320},
       {17,"Kiki" , "Chien sauvage", 7 , "Savane" , 25},
       {18,"Donatello" , "Tortue", 40 , "Rivière" , 90.5},
       {19,"Polly" , "Oiseau", 5 , "Jungle" , 1.5},
       {20,"Kong" , "Gorille", 13 , "Jungle" , 180},
};


char checkchoix() {
    char choix[30];
    while (2018)
    {
        
        scanf("%s", choix);
        while (getchar() != '\n');
        if (choix[0]> 57 || choix[0] < 48 || strlen(choix) > 1)
        {
            printf("choix indéfini\n");
            printf("Entrer : ");
            
            continue;
        }
        return choix[0];
    }
} 
void Menu() {
    printf("\n\n============== Gestion d\'un Zoo ==============\n\n");
    printf("1.  Ajouter un animal\n");
    printf("2.  Afficher les animaux\n");
    printf("3.  Modifier un animal\n");
    printf("4.  Supprimer un animal\n");
    printf("5.  Rechercher un animal\n");
    printf("6.  Statistiques\n");
    printf("7.  quitter le programme\n");
    printf("Entrer : ");


}


void sortbyname() {
    Animal temp_nom;
    for (int i = 0 ; i < nb_animal - 1 ;i++)
    {
        for (int j = 0 ; j < nb_animal - i - 1 ; j++)
        {
            
            if (strcmp(A[j].nom , A[j + 1].nom) > 0)
            {
                 temp_nom = A[j];
                 A[j] = A[j + 1];
                 A[j + 1] = temp_nom;
            }
        }
    }
}

void sortedage() {
    Animal temp_age;
    for (int i = 0 ; i < nb_animal - 1 ; i++)
    {
        for (int j = 0 ; j < nb_animal - i - 1; j++)
        {
            if (A[j].age > A[j + 1].age) 
            {
                temp_age = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp_age;
            }
        }
    }
}
void  Ajouter() {
    char choix ;
    
    printf("\n=== Ajouter un animal ===\n");
    printf("1. Ajouter animal\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    choix = checkchoix();
    switch (choix) {
        case '1' :
            // nom
            
            printf("\nEntrer le nom : ");
            scanf(" %[^\n]", A[nb_animal].nom);

            
            
            // espece 
            
            printf("Entrer le espèce : ");
            scanf(" %[^\n]", A[nb_animal].espece);
            
            
            
            // age 
            printf("Entrer age : ");
            scanf("%d", &A[nb_animal].age);
            
            
            // Habitat
            
            printf("Entrer le habitat : ");
            scanf(" %[^\n]",  A[nb_animal].habit);
            


            printf("Entrer le poids : ");
            scanf("%f", &A[nb_animal].poids);
            A[nb_animal].id = ++idd;
            
            printf("ton Id = %d", A[nb_animal].id);
            nb_animal++;
            break;

        case '0' :
            return;
            
    }



}

void  Afficher() {
    char choix;
    printf("\n=== Afficher ===\n");
    printf("1. Afficher la liste complète\n");
    printf("2. Trier par nom\n");
    printf("3. Trier par âge\n");
    printf("4. Afficher uniquement les animaux d\'un habitat spécifique\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    choix = checkchoix();
    switch (choix) 
    {
        // hadi bax nbyn ga3 animals
        case '1' :  
            for (int i = 0 ;i < nb_animal ; i++)
            {
                printf("\n\n==== Animal de id : %d ==== \n\n", A[i].id);
                printf("=> Nom : %s \n", A[i].nom);
                printf("=> Espèce : %s \n", A[i].espece);
                printf("=> Age : %d \n", A[i].age);
                printf("=> Habit : %s \n", A[i].habit);
                printf("=> Poids : %.2f \n", A[i].poids);

            }
            break;
        // Katll3 smaya mn  A _ Z 
        case '2' : 
            sortbyname();
            for (int i = 0 ; i < nb_animal ; i++)
            {

                    printf("\n\n=> Nom : %s \n", A[i].nom);
                    printf("=> Espèce : %s \n", A[i].espece);
                    printf("=> Age : %d \n", A[i].age);
                    printf("=> Habit : %s \n", A[i].habit);
                    printf("=> Poids : %.2f \n", A[i].poids);
            }
            break;
            
        //  katll3 mn sghir llkbir
        case '3' :  
            sortedage();
            for (int i = 0 ; i < nb_animal ;i++)
            {
                    printf("\n\n=> Nom : %s \n", A[i].nom);
                    printf("=> Espèce : %s \n", A[i].espece);
                    printf("=> Age : %d \n", A[i].age);
                    printf("=> Habit : %s \n", A[i].habit);
                    printf("=> Poids : %.2f \n\n", A[i].poids);
            }
            break;
            
        // Hadi katl3 li 3ndhom nfs habit 
        case '4' :  
            char s_habit[20];
            int r = 0;
            printf("Entrer le nom de habit : ");
            scanf(" %[^\n]", s_habit);
            for (int i = 0 ; i < nb_animal ; i++)
            {
                if (strcmp(A[i].habit ,  s_habit) == 0)
                {
                    printf("\n\n=> Nom : %s \n", A[i].nom);
                    printf("=> Espèce : %s \n", A[i].espece);
                    printf("=> Age : %d \n", A[i].age);
                    printf("=> Habit : %s \n", A[i].habit);
                    printf("=> Poids : %.2f \n\n", A[i].poids);
                    r++;
                }
                if (i == nb_animal - 1 && r == 0)
                {
                    printf("il n'y a aucun animal avec ce nom d'habitat");
                    return;
                }
            }
            
            break;
        case '0' :  
            return;
    }
    

     
}


void  Modifier() {
    int s_id, k = 0;
    char choix; 
    printf("1. Modifier l\'habitat d’un animal\n");
    printf("2. Modifier l\'âge\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    choix = checkchoix();
    switch (choix)
    {
        // kat9lb 3la ** id ** w katbdl *** habit ***
        case '1' : 
           
           printf("Entrer le id de le animal : ");
           scanf("%d", &s_id);
           for (int i = 0 ; i < nb_animal ; i++)
           {
              if (s_id == A[i].id)
              {
                  printf("Entrer new habit : ");
                  scanf(" %[^\n]", A[i].habit);
                  k++;
                  
              }
              if (i == nb_animal - 1 &&  k == 0)
              {
                  printf("il n'y a pas d'identifiant avec la valeur %d", s_id);
                  return;
              }
           }
           break;
        // kat9lb 3la ** id ** w katbdl *** Age ***   
        case '2' :
           printf("Entrer le id de le animal : ");
           scanf("%d", &s_id);
           for (int i = 0 ; i < nb_animal ; i++)
           {
              if (s_id == A[i].id)
              {
                  printf("Entrer new Age : ");
                  scanf("%d", &A[i].age);
                  k++;
                  
              }
              if (i == nb_animal - 1 &&  k == 0)
              {
                  printf("il n'y a pas id avec la valeur %d", s_id);
                  return;
              }
           }
           
           break;
           
        case '0' :
           
           return;
        
    }
    
    
}


void  Supprimer() {
    int s_id, l = 0;
    printf("\nEntrer id : ");
    scanf("%d", &s_id);
    for (int i = 0 ; i < nb_animal ; i++)
    {
        if (A[i].id == s_id)
        {
            for (int j = i ; j < nb_animal - 1 ; j++)
            {
                
                A[j] = A[j + 1];
            }
            l++;
            nb_animal--;
            printf("l'animal est supprimé");
            return;
            
        }
        if (i == nb_animal - 1 && l == 0)
        {
            printf("il n'y a pas d'identifiant avec la valeur");
            return;
        }
    }
    
}


void  Rechercher() {
    int  s_id, p = 0;
    char s_choix[20];
    char choix;
    printf("\n1. Rechercher par id\n");
    printf("2. Rechercher par nom\n");
    printf("3. Rechercher par espèce\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    choix = checkchoix();
    switch (choix)
    {
        // kanchd id w kan aficher les info dyalo
        case '1' : 
            
            printf("Entrer id : ");
            scanf("%d", &s_id);
            for (int i = 0 ; i < nb_animal ; i++)
            {
                if (A[i].id == s_id)
                {
                    printf("\n\n=> Nom : %s \n", A[i].nom);
                    printf("=> Espèce : %s \n", A[i].espece);
                    printf("=> Age : %d \n", A[i].age);
                    printf("=> Habit : %s \n", A[i].habit);
                    printf("=> Poids : %.2f \n\n", A[i].poids);
                    p++;
                }
                if (i == nb_animal - 1 &&  p == 0)
                {
                    printf("il n'y a pas id avec la valeur %d", s_id);
                    return;
                }
            }
        
            break;
        // kanxd smiya w kan3ti les info dyalo 
        case '2' : 
            printf("\nEntrer le nom de animal : ");
            scanf(" %[^\n]", s_choix);
            
            for (int i = 0 ; i < nb_animal ; i++)
            {
                if (strcmp(A[i].nom , s_choix) == 0)
                {
                    printf("\n\n=> Nom : %s \n", A[i].nom);
                    printf("=> Espèce : %s \n", A[i].espece);
                    printf("=> Age : %d \n", A[i].age);
                    printf("=> Habit : %s \n", A[i].habit);
                    printf("=> Poids : %.2f \n\n", A[i].poids);
                    p++;
                }
                if (i == nb_animal - 1 &&  p == 0)
                {
                    printf("il n'y a aucun animal avec ce nom ");
                    return;
                }
            }
            
            
        
        
            break;
        case '3' : 
           printf("\nEntrer le espèce de animal : ");
           scanf(" %[^\n]", s_choix);
           for (int i = 0 ; i < nb_animal ; i++)
           {
               if (strcmp(A[i].espece , s_choix) == 0)
               {
                   printf("\n\n=> Nom : %s \n", A[i].nom);
                   printf("=> Espèce : %s \n", A[i].espece);
                   printf("=> Age : %d \n", A[i].age);
                   printf("=> Habit : %s \n", A[i].habit);
                   printf("=> Poids : %.2f \n\n", A[i].poids);
                   p++;
               }
               if (i == nb_animal - 1 &&  p == 0)
               {
                    printf("il n\'existe aucune espèce animale comme celle-là");
                    return;
               }
           }
           break;
           
        case '0' : 
        
           return;
    }
    
    
}


void  Statistiques() {
    int choix;
    printf("1. Nombre total d’animaux dans le zoo\n");
    printf("2. Age moyen des animaux\n");
    printf("3. Plus vieux et plus jeune animal\n");
    printf("4. Afficher les espèces les plus représentées\n");
    printf("0. Retour au menu principal\n");
    printf("Entrer : ");
    choix = checkchoix();
    switch(choix)
    {
        case '1':
        
           printf("\n\nNombre total d’animaux dans le zoo est : %d", nb_animal);
           break;
           
        case '2': 
           int S = 0 ;
           for (int i = 0 ; i < nb_animal ; i++)
           {
               S += A[i].age;
           }
           int M = S / nb_animal;
           printf("\n\n => Age moyen des animaux : %d \n\n", M);
           
           break;
        case '3': 
           int m , n ;
           int maxx = A[0].age;
           int min = A[0].age;
           for (int i = 0 ; i < nb_animal ; i++)
           {
               if (maxx < A[i].age)
               {
                   maxx = A[i].age;
                   m = i;
               }
               if (min > A[i].age)
               {
                   min = A[i].age;
                   n = i;
               }
           }
           printf("\n=> Animal Plus vieux : \n");
           printf("\n\n=> Nom : %s \n", A[m].nom);
           printf("=> Espèce : %s \n", A[m].espece);
           printf("=> Age : %d \n", A[m].age);
           printf("=> Habit : %s \n", A[m].habit);
           printf("=> Poids : %.2f \n\n", A[m].poids);
           
           printf("\n=> Animal Plus jeune  : \n");
           printf("\n\n=> Nom : %s \n", A[n].nom);
           printf("=> Espèce : %s \n", A[n].espece);
           printf("=> Age : %d \n", A[n].age);
           printf("=> Habit : %s \n", A[n].habit);
           printf("=> Poids : %.2f \n\n", A[n].poids);
           
           
           break;
           
        case '4': 
           
           // kan9lb 3la aktar naw3;
           int  maxcount = 0; 
           char alot[20];
           for (int i = 0 ; i < nb_animal ; i++)
           {
               int count = 1;
               for (int j = i + 1; j < nb_animal ; j++)
               {
                   if (strcmp(A[i].espece , A[j].espece) == 0)
                   {
                       
                       count++;
                    
                   }
               }
               if (count > maxcount)
               {
                   maxcount = count;
                   strcpy(alot , A[i].espece);
               }
           }
           printf("le espèce le plu représentées : %s", alot);
           break;
        case '0': 
           break;
    }
}

int main() {
    while (2)
    {
        
        char m_choix;
        Menu();
        
        m_choix = checkchoix();
        switch(m_choix) 
        {
            case '1' : 
                Ajouter();
                break;
                
            case '2' : 
                Afficher();
                break;
    
    
            case '3' : 
                Modifier();
                break;
    
    
            case '4' :
                Supprimer(); 
                break;
    
    
            case '5' : 
                Rechercher();
                break;
    
    
            case '6' : 
                Statistiques();
                break;
            case '7' : 
                return 0;
            default : 
               break;
    
        }
        
    }

}