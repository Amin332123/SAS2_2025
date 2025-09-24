#include <stdio.h>
int main() {
    float x;
    printf("Entrer le résulta : ");
    scanf("%f", &x);
    if (x < 10) {
        printf("recalé");
    } else if (x >= 10 && x < 12) {
        printf("passable");
    } else if (x >= 12 && x < 14) {
        printf("assez bien");
    } else if (x >= 14 && x < 16) {
        printf("bien");
    } else if (x >= 16) {
        printf("très bien");
    }
    return 0;
}
