#include <stdio.h>
int main() {
    int x,y, sum;
    printf("Entrer 1er nombre : ");
    scanf("%d", &x);
    printf("Entrer 2em nombre : ");
    scanf("%d", &y);
    sum = x + y;
    if (x == y) {
        sum *= 3;
        printf("triple sum : %d", sum);
    } else {printf("Sum : %d", sum);}
    return 0;
}


