#include <stdio.h>
int main() {
    int n ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n];
    for (int i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
        
    }
    for (int i = 0 ; i < n ; i++) {
        printf("%d \n", array[i]);
    }
    
    return 0;
}