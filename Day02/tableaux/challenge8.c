
#include <stdio.h>

int main() {
    int n , i ;
    printf("n : ");
    scanf("%d", &n);
    
    int a[n];
    
    for (i = 0 ; i < n ; i++) {
        printf("élement %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    
    int b[n] ;
    
    for ( i = 0 ; i < n ; i++) {
        b[i] = a[i];
    }
    for (i = 0 ; i < n ; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (i = 0 ; i < n ; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}