#include <stdio.h>
typedef struct {
    int x;
    int y;
} point ; 
int main() {
    int a , b ;
    printf("a : ");
    scanf("%d", &a);
    printf("b : ");
    scanf("%d", &b);
    int *pa = &a;
    int *pb = &b;
    // avant modification
    printf("a : %d | b : %d\n", *pa , *pb);
    *pa = 5;
    *pb = 10;
    // après modification
    printf("a : %d | b : %d", *pa , *pb);
    return 0;
}