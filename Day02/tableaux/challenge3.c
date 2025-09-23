#include <stdio.h>
int main() {
    int n ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n], somme = 0;
    for (int i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
        somme += array[i];
    }
    printf("La somme => %d", somme );
    
    
    return 0;
}


