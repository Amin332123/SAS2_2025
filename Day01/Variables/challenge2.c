#include <stdio.h>
int main() {
    int c; float k;
    printf("Entrer la température en Celsius : ");
    scanf("%d", &c);
    k = c + 273.15;
    printf("Kelvin : %.2f", k);
    return 0;
}