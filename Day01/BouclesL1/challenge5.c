#include <stdio.h>
int main() {
    int b,i,e, r = 1;
    printf("b : "); 
    scanf("%d", &b);
    printf("e : "); 
    scanf("%d", &e);
    for (i = 0 ; i < e ; i++) 
    {
        r *= b;
    }
    printf("%d ^ %d = %d", b , e , r);
    return 0;
}

