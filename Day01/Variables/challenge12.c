#include <stdio.h>
int main() {
    int a;
    printf("a : ");
    scanf("%d", &a);
    int T, h, t, f;
    T = a % 10;
    h = (a / 10 ) % 10;
    t = ( a / 100) % 10;
    f = ( a / 1000) % 10;
    
    int inverse = T * 1000 + h * 100 + t * 10 + f;
    printf("%d", inverse);
    return 0;
}