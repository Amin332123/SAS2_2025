// Challenge 1 : Fonction de Somme
#include <stdio.h>
int sum(int x , int  y) {
    return x + y;
}
int main() {
    printf(" La somme : %d",sum(5 , 7));
    return 0;
}

// ------------------------------------------

// Challenge 2 : Fonction de Multiplication
#include <stdio.h>
int produit(int x ,int y) {
    return x * y;
}
int main() {
    printf("Le produit : %d ", produit(12, 3));
    
}


// ------------------------------------------

// Challenge 3 : Fonction de Maximum
#include <stdio.h>
int max(int x,int  y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main() {
    printf("max : %d", max(8, 7));
    return 0;
}


// ------------------------------------------



// Challenge 4 : Fonction de Minimum
#include <stdio.h>
int min(int x,int  y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}
int main() {
    printf("min : %d", min(6, 7));
    return 0;
}



// ------------------------------------------



// Challenge 5 : Fonction de Factorielle
#include <stdio.h>
int fac(int x, int n_f) {
    for (int i = 1; i <= x ; i++) {
        n_f = n_f * i;
    }
    return n_f;
}
int main() {
    int n;
    printf("n : ");
    scanf("%d", &n);
    printf("%d", fac(n, 1));
    return 0;
}

    

    

// ------------------------------------------


// Challenge 6 : Fonction de Fibonacci


// ------------------------------------------

// Challenge 7 : Fonction d'Inversion de Chaîne
#include <stdio.h>
#include <string.h>
void reve(char chaine[], char result[])
{
    int i,len;
    len = strlen(chaine);
    for (i = 0 ; i < len ; i++)
    {
        result[i] = chaine[len - 1 - i];
    }
    result[len] = '\0';
    
    
    
}
int main() {
     
    char chainne[100], resultt[100];
    printf("Entrer : ");
    scanf("%s", chainne);
    reve(chainne , resultt);
    printf("%s",   resultt);
    return 0;
}


// ------------------------------------------


// Challenge 8 : Fonction de Vérification de Parité
#include <stdio.h>

int pair_ou_im(int x) 
{
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int n;
    printf("entrer un nombre : ");
    scanf("%d", &n);
    printf("%d",pair_ou_im(n) );
    return 0;
}


