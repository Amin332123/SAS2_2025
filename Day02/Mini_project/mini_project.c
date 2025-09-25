#include <stdio.h>
#include <string.h>

int main() {
    char Titre[10][50], Auteur[10][50]; float prix[10] ;int  quantité[10], q = 0 ,i = 0, n = 0 , ex = 1 , n_v ;
    do {
        hi :
        printf("\n\n == Système de Gestion de Stock dans une Librairie ==\n\n");
        printf("1. Ajouter un livre au stock\n");
        printf("2. Afficher Tous les Livres Disponibles\n");
        printf("3. Supprimer un Livre du Stock\n");
        printf("4. Mettre à Jour la Quantité d'un Livre\n");
        printf("5. Afficher le Nombre Total de Livres en Stock\n");
        printf("6. Exit\n");
        int ch;
        printf("Entrer : ");
        scanf("%d", &ch);
        switch (ch) {
            case 1 : 
               
               printf("Titre du livre : ");
               scanf(" %[^\n]", &Titre[i]);
               
               printf("Auteur du livre : ");
               scanf(" %[^\n]", &Auteur[i]);
               
               printf("prix : ");
               scanf("%f", &prix[i]);
             
               printf("Quantité en stock : ");
               scanf("%d", &quantité[i]);
               
               n += 1; 
               q += quantité[i];
               i += 1;
               break; 
            case 2 : 
                if (n != 0) {
                    if (i != 2) {
                        printf("\nles Livres Disponibles : \n\n");
                        for ( int j = 0 ; j < n ; j++) {
                            printf("=> Titre de livre : %s\n", Titre[j]);
                            printf("=> Auteur du livre : %s\n", Auteur[j]);
                            printf("=> Prix du livre. : %.2f\n",prix[j]);
                            printf("=> Quantité en stock : %d\n\n\n",quantité[j]);
                        
                    }
                    } else {
                        printf("Le livre disponible : \n\n");
                        for ( int j = 1 ; j < i ; j++) {
                            printf("=> Titre de livre : %s\n", Titre[j]);
                            printf("=> Auteur du livre : %s\n", Auteur[j]);
                            printf("=> Prix du livre. : %.2f\n",prix[j]);
                            printf("=> Quantité en stock : %d\n\n\n",quantité[j]);
                        
                    }
                    }
                    
                } else {
                    printf("il n'y a pas de livre à l'heure actuelle");
                }
                break;
            case 4 : 
                
                char a[30] ; 
                printf("Entrer le titre de livre : ");
                scanf(" %[^\n]", &a);
                for (int j = 0 ; j < n ; j++) {
                    if (strcmp(Titre[j] , a) == 0) {
                        printf("il y en a %d de ce livre\n", quantité[j]);
                        printf("Enter nouvelle nombre  : ");
                        scanf("%d", &n_v);
                        quantité[j] = n_v;
                        
                    }
                }
                break;
            case 3 : 
                char b[30] ; 
                printf("\n\nEntrer le titre de livre : ");
                scanf(" %[^\n]s", &b);
                for (int k = 0 ; k < n ; k++) {
                    if (strcmp(Titre[k], b) == 0 ) {
                        q -= quantité[k];
                        for (int s = k ; s < n - 1 ; s++) 
                        {
                            strcpy(Titre[s], Titre[s + 1]);
                            strcpy(Auteur[s], Auteur[s + 1]);
                            prix[s] = prix[s + 1];
                            quantité[s] = quantité[s + 1];
                        }
                        
                        printf("Le livre est supprimé");
                        n -= 1;
                        break;
                        
                        
                        
                    }
                    
                    
                }
                break;   
                case 5 : 
                    printf("\n\n=> le Nombre Total de Livres en Stock : %d", q);
                    break;
                    
                case 6 : 
                    ex = 0;
                    break;
                    
                default : 
                   ex = 0;
               
                   
                   
                }
        
            
        
        
    } while (ex != 0);
    
    
    return 0;
}