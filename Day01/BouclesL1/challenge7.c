#include <stdio.h>
int main() {
    int n;
    printf("Entrer un nombre :");
    scanf("%d", &n);
    int inverse = 0;
    while (n != 0) {
        int d = n % 10;
        inverse = inverse *10 + d;
        n /= 10 ;
    } printf("inverse : %d", inverse);
    return 0;
}
