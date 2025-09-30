    #include <stdio.h>
    #include <string.h>
    #define maxcontact 100
    typedef struct {
        char nom[50];
        char tell[11];
        char email[50];
    } contact;
    contact c[maxcontact];
    int nb_de_contact = 0 ;
    void Menu() {
        printf("====== Système de Gestion de Contacts ====== \n\n");
        printf("1. Ajouter un contact \n");
        printf("2. Modifier un contact \n");
        printf("3. Supprimer un contact \n");
        printf("4. Afficher un contact \n");
        printf("5. Rechercher un contact \n");
        printf("6. Quitter le programme \n");
    }
    void ajouter() {
        
        printf("=> Entrer le nom : ");
        scanf(" %[^\n]", c[nb_de_contact].nom);
        // i created this code bellow for anyone does not want to have same acount name .
        // int z;

        /* for (int i = 0 ; i < nb_de_contact ; i++)
        {
            if ( strcmp(c[i].nom , c[nb_de_contact].nom) == 0) 
            {
                
                int x = 1;
                while (x <= 3)
               {
                   printf("\nCe nom est déjà dans le contact\n");
                   printf("=> Entrer le nom : ");
                   scanf(" %[^\n]", c[nb_de_contact].nom);
                   for (int i = 0 ; i < nb_de_contact ; i++)
                   {
                       if (strcmp(c[i].nom , c[nb_de_contact].nom) == 0) {
                //           z = i;
                //       } else {
                //           goto here ;
                //       }
                //   }   
                       
                //   if (x == 3 &&  strcmp(c[z].nom , c[nb_de_contact].nom) == 0) 
                //   {
                       return;
                   }
                   
                   x++;
               }
                
                
                
            }
        }
        here : */
        printf("=> nombre de telephone : ");
        scanf(" %[^\n]", c[nb_de_contact].tell);
        if (strlen(c[nb_de_contact].tell) != 10 )
        {
            printf("\nInvalide , tu dois écrire 10\n");
            return;
        } else {
            
            for (int i = 0 ; i < 10 ; i++)
            {
                if (c[nb_de_contact].tell[i] >= 48 && c[nb_de_contact].tell[i] <= 57) 
                {
                    if (c[nb_de_contact].tell[0] == 48 && c[nb_de_contact].tell[1] == 53 || c[nb_de_contact].tell[1] == 54 || c[nb_de_contact].tell[1] == 55) {
                        
                    } else {
                        printf("\nNvous devez commencer vos deux premiers numéros par 06 ou 05\n");
                        return;
                    }
                    
                } else {
                    printf("\nInvalide , tu dois écrire ***** 10 nombres ******\n");
                    
                    return;
                }
            }
        }
        
        
        
        printf("=> email : ");
        scanf(" %[^\n]", c[nb_de_contact].email);
        char *p = strstr(c[nb_de_contact].email, "@" );
        char *r = strstr(c[nb_de_contact].email, "." );
        if (p && r) {
            
        } else {
            printf("\nErreur, l'email est incorrect\n");
            return;
        }
        nb_de_contact++;
        printf("Contact ajouté avec succès \n");
    }
    void modifier() {
        if (nb_de_contact != 0 )
        {
            int trouver = 0;
            char s_nom[50];
            printf("=> Entrer le nom : ");
            scanf(" %[^\n]", s_nom);
            for (int i = 0 ; i < nb_de_contact ; i++)
            {
                if ( strcmp(c[i].nom , s_nom) == 0) 
                {
                    printf("=> entrer un nouveau numéro : ");
                    scanf(" %[^\n]", c[i].tell);
                    printf("=> entrer une nouvelle adresse e-mail : ");
                    scanf(" %[^\n]", c[i].email);
                    printf("Contact modifié avec succès\n\n");
                    trouver = 1;
                    break;
                }
            }
            if (!trouver)
            {
                printf("il n'y a aucun contact avec ce nom\n\n");
            }
            
        } else  {
                printf("il n'y a pas de contact\n");
        }
    }
    void supprimer() {
        if (nb_de_contact != 0 )
        {
            int trouver = 0;
            char s_nom[50]; 
            printf("=> Entrer le nom : ");
            scanf(" %[^\n]", s_nom);
            for (int i = 0 ; i < nb_de_contact ; i++)
            {
                if (strcmp(c[i].nom , s_nom ) == 0) 
                {
                    for (int j = i ; j < nb_de_contact - 1 ; j++)
                    {
                        c[j] = c[j+1];
                    }
                    trouver = 1;
                    nb_de_contact--;
                    printf("le contact est supprimé\n\n");
                    break;
                }
                
                  
            } 
            if (!trouver) {
                 printf("il n'y a aucun contact avec ce nom\n\n");
            }
            
        } else  {
                printf("il n'y a pas de contact\n\n");
        }
    }
    void Afficher() {
        if (nb_de_contact != 0 ) 
        {
            
            for (int i = 0 ; i < nb_de_contact ; i++)
            {
                printf("\n\n ======== Contact %d ======== \n\n", i+1);
                printf("=> Nom : %s\n", c[i].nom);
                printf("=> Tele : %s\n", c[i].tell);
                printf("=> email : %s\n", c[i].email);
                
            }
            printf("\n");
        } else  {
                printf("il n'y a pas de contact\n\n");
        }
    }
    
    
    void  Rechercher() {
        if (nb_de_contact != 0 ) 
        {
            char s_nom[50]; 
            printf("=> Entrer le nom : ");
            scanf(" %[^\n]", s_nom);
            for (int i = 0 ; i < nb_de_contact ; i++)
            {
                if (strcmp(c[i].nom , s_nom ) == 0) 
                {
                    printf("\n=> Nom : %s\n", c[i].nom);
                    printf("=> Tele : %s\n", c[i].tell);
                    printf("=> email : %s\n\n", c[i].email);
                   
                }
            }
        } else  {
                printf("il n'y a pas de contact\n\n");
        }
    }
    int main() {

        
        int choix;
        while (1) {
         
        Menu();
        printf("==> Entrer : ");
        if (scanf("%d", &choix) != 0) {
            
        } else {
            while (getchar() != '\n'){
                
            }
            choix = -1;
            
        }
     


        switch (choix) {
        case 1 : ajouter(); break;
        case 2 : modifier(); break;
        case 3 : supprimer(); break;
        case 4 : Afficher(); break;
        case 5 : Rechercher(); break;
        default : printf("invalide\n");break;
        case 6 : return 0;
        } 
        }
        return 0;
    }