#include <stdio.h>
int main() {
    int n;
    printf("Entrer le nombre : ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("le nombre %d est paire .", n);
    } else if (n % 2 != 0) {
        printf("le nombre %d est impaire .", n );}
    return 0;
}


