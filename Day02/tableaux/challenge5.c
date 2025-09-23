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
    
    int min = array[0];
    for (int i = 0 ; i < n ; i++) {
        if (min > array[i]) 
            min = array[i];
        
    }
    printf("min : %d", min);
    return 0;
    
}


