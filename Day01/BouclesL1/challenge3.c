#include <stdio.h>

int main() {
    
    int n, r = 0;
    
    printf("n : ");
    scanf("%d", &n);
    
    
    for (int i = 1 ; i <= n ; i++) {
        r += i;
    }
    printf("Somme : %d", r);
    return 0;
    
}
