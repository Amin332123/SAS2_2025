#include <stdio.h>
int main() {
    int n ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n],f;
    for (int i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
    }
    printf("Entrer le nombre de facteur : ");
    scanf("%d", &f);
    
    for (int i = 0 ; i < n ; i++) {
        printf("%d x %d = %d \n", array[i], f , array[i] * f);
    }
    return 0;
    
}


