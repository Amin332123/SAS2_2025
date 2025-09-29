// Challenge 1 : Table de Multiplication Inversée
#include <stdio.h>
int main() {
    int n, i;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    for (i = 10 ; i > 0 ; i--) {
        printf("=> %d x %d = %d\n", n , i ,n*i);
    }
    return 0;
}



// ------------------------------------------


// Challenge 2 : pyramide d'étoile
#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("n : "); 
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++)   
    {
        for (j = 0 ; j < n - i - 1; j++) {
            printf(" "); 
        } 
        for (k = 0 ; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}




// ------------------------------------------


// Challenge 3 : Affichage des Nombres Premiers



// ------------------------------------------


// Challenge 4 : Inversion d'un Entier
#include <stdio.h>
int main() {
    int n , v , i  , verse = 0 ;
    printf("Entrer le nombre : ");
    scanf("%d", &n);
    while (n!=0)
    {
        v  = n % 10;
        verse = verse * 10 + v;
        n /= 10;
    } printf("%d ", verse);
    return 0;
}


// ------------------------------------------


// Challenge 5 : Somme des N Nombres
#include <stdio.h>
int main() {
    int n,i , s = 0;
    printf("n : ");
    scanf("%d", &n);
    for (i = 1 ; i <= n ; i++) {
        s += i ;
    } printf("Somme est : %d", s);
    return 0;
}


// ------------------------------------------



// Challenge 6 : Facteurs d'un Nombre
#include <stdio.h>
int main() {
    int n , i ;
    printf("n : ");
    scanf("%d", &n);
    if (n == 1) printf("%d ", 1);
    for (i = 1 ; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    } 
    return 0;
}


// ------------------------------------------



// Challenge 7 : Suite de Fibonacci




// ------------------------------------------

// Challenge 8 : Recherche Dichotomique
#include <stdio.h>
int main() {
    int array[5] = {1, 2, 5, 8, 3}, n , i;
    printf("n : ");
    scanf("%d", &n);
    for (i = 0 ; i < 5 ; i++) {
        if (array[i] == n) {
            printf("Oui , %d est dans le tableau", n);
        } else {
            printf("Le numéro %d n\'est pas dans le tableau", n);
            break;
        }
    }
    return 0;
}



// ------------------------------------------


// Challenge 9 : Calcul de la Puissance
#include <stdio.h>
int main() {
    int b,e,i,r = 1;
    printf("b : ");
    scanf("%d", &b);
    printf("e : ");
    scanf("%d", &e);
    for (i = 0 ; i < e ; i++)
    {
        r = r * b;
    } printf("%d ", r);
    return 0;
}


// ------------------------------------------

// Challenge 10 : Générateur de Mot de Passe

// -----------------------------------------


// Challenge 11 : Moyenne des Nombres
#include <stdio.h>
int main() {
    int n , i = 0; float s = 0 , a; 
    printf("n : ");
    scanf("%d", &n);
    
    while (n != 0) {
        if (n > 0) {
            printf("Ok . \n");
            s += n;
            i++;
        } else if ( n < 0 ) {
            printf("Enter positif nombre  : \n");
        }
        printf("n : ");
        scanf("%d", &n);
    } 
    printf("You entered 0 ");
    a = s / i ;
    printf("a = %.2f", a);
    return 0;
   
}


// ------------------------------------------



// Challenge 12 : Tri par Bulles
#include <stdio.h>
int main() {
    int n , i, j ;
    printf("n : ");
    scanf("%d", &n);
    
    int everything[n], positive[n];
     
    for (i = 0 ; i < n ; i++) {
        printf("n[%d] = ", i);
        scanf("%d", &everything[i]);
    }
    
    j = 0;
    for (i = 0  ; i < n ; i++) {
        
        if (everything[i] > 0) {
            
           positive[j] = everything[i];
           j++;
        }
    }
    
    for (j = 0  ; j < n ; j++) {
        if (j == n - 1 || positive[j] == 0) {
            break;
        }
        printf("%d ", positive[j]);
    }
    return 0;
   
}

// ------------------------------------------



// Challenge 13 : Table de Multiplication avec Somme
#include <stdio.h>
int main() {
    int n , i , s = 0, m;
    printf("n : ");
    scanf("%d", &n);
    
    for (i = 1; i <= 10 ; i++ ) {
        printf("%d x %d = %d\n", n , i , n*i);
        s = s + n*i;
        
    }
    printf("la somme des produits ==> %d", s);
    return 0;
   
}


// ------------------------------------------

// Challenge 14 : Sélection de Sortie
#include <stdio.h>
int main() {
    char *array[7] = {"lundi", "mardi", "mercredi", "jeudi", "vendredi", "samedi", "dimanche"};
    int n , i;
   
    for (i = 0 ; i < 7 ; i++) {
        printf("%d. %s\n", i+1 ,array[i]);
    }
    printf("enter le nombre de jour que tu veux :");
    scanf("%d", &n);
    
    for (i = n - 1 ; i < 7 ; i++) {
        printf("%s \n", array[i]);
    }
    return 0;
   
}

// ------------------------------------------


// Challenge 15 : Calcul de la Factorielle
#include <stdio.h>

int main() {
    
    int n , i , n_f = 1 , j;
    printf("n : ");
    scanf("%d", &n);
    
    for (i = 1 ; i <= n ; i++) {
        n_f = n_f * i;
    }
    printf("%d", n_f);
    return 0;
}