#include <stdio.h>

int main() {
    int z;
    printf("entrer un nombre : ");
    scanf("%d", &z);
    if (z < 0) {
        printf("le nombre est négatif");
    } else if (z > 0) {
        printf("le nombre est positif");
    } else  {
        printf("le nombre est égal à zéro");
    }
    return 0;
    
}
