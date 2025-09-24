#include <stdio.h>
int main() {
    int n;
    printf("Entrer un nombre : ");
    scanf("%d", &n);
    int count = 0 , i = 2;
    while (count < n) {
        printf("%d ", i);
        i += 2;
        count++;
    }
    return 0;
}
