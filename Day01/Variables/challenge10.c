#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    float r;
    printf("Entrer le rayon : ");
    scanf("%f", &r);
    float volume = (4.0/3.0) * PI * pow(r , 3);
    printf("Le volume est : %.2f", volume);
    return 0;
}
