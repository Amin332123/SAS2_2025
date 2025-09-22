#include <stdio.h>
int main() {
    int c;
    printf("Entrer la température en Celsius : ");
    scanf("%d", &c);
    if (c < 0) {
        printf("Solide");
    } else if (c >=  0 && c < 100) {
        printf("Liquide");
    }else {
       printf("Gaz");
    }
    return 0;
}