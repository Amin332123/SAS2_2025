#include <stdio.h>

int main() {
    int n, r = 1;
    printf("n : ");
    scanf("%d", &n);
    for (int i = 1 ; i <= n ; i++) {
        r *= i ;
    }
    printf("%d! = %d", n , r);
    
    return 0;
    
}
