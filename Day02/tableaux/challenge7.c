#include <stdio.h>
int main() {
    int n ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n], a;
    for (int i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
    }
    
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (array[i] <= array[j]) {
                a = array[j] ;
                array[j] = array[i];
                array[i] = a;
            }
        }
    }
    for (int i = 0 ; i < n ; i++) {
        printf("%d ", array[i]);
    }
    return 0;
    
}


