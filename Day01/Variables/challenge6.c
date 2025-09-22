#include <stdio.h>
int main() {
    float  a,b;
    printf("Entrer la valeur de a : ");
    scanf("%f", &a);
    printf("Entrer la valeur de b (b != 0): ");
    scanf("%f", &b);
    
    printf("%.2f + %.2f = %.2f\n", a,b,a+b);
    printf("%.2f - %.2f = %.2f\n", a,b,a-b);
    printf("%.2f * %.2f = %.2f\n", a,b,a*b);
    printf("%.2f / %.2f = %.2f\n", a,b, a/b);
    return 0;
}