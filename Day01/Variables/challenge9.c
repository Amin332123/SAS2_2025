#include <stdio.h>
#include <math.h>
int main() {
    float x1,x2,y1,y2,z1,z2;
    printf("Entrer x1 : ");
    scanf("%f", &x1);
    printf("Entrer x2 : ");
    scanf("%f", &x2);
    printf("Entrer y1 : ");
    scanf("%f", &y1);
    printf("Entrer y2 : ");
    scanf("%f", &y2);
    printf("Entrer z1 : ");
    scanf("%f", &z1);
    printf("Entrer z2 : ");
    scanf("%f", &z2);
    float distance = sqrt(pow(x2-x1 , 2) + pow(y2-y1, 2) + pow(z2-z1, 2));
    printf("Distance : %.2f", distance);
    return 0;
}
