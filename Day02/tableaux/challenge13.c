#include <stdio.h>
int main() {
    int n , i ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
    }
    printf("Les éléments pairs : ");
    for (i = 0 ; i < n ; i++) {
        if (array[i] % 2 != 0) 
            printf("%d ", array[i]);
    }
    return 0;
}