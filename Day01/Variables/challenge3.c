#include <stdio.h>
int main() {
    float km , yards ;
    printf("Entrer la distance en kilométres : ");
    scanf("%f", &km);
    yards = km * 1093.61;
    printf("Yards : %.2f", yards);
    return 0;
}
