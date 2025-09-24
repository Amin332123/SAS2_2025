
#include <stdio.h>

int main() {
    int n , r , i;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
    }
    printf("Entrez le numéro que vous souhaitez rechercher : ");
    scanf("%d", &r);
    
    for (i = 0 ; i < n ; i++ ) {
        if (r == array[i]) {
            printf("l'élément est présent");
            break;
        } 
        if (i == n - 1 && r != array[n -1]) {
            printf("l'élément est pas présent");
        }
    } 
    
    return 0;
}