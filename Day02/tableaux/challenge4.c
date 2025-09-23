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
    
    int max = array[0];
    for (int i = 0 ; i < n ; i++) {
        if (max < array[i]) 
            max = array[i];
        
    }
    printf("Max : %d", max);
    return 0;
    
}


