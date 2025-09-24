#include <stdio.h>
int main() {
    int A, i, j ;
    printf("Nombre d\'éléments d\'un tableau : ");
    scanf("%d", &A);
    int T[A];
    for (i = 0 ; i < A ; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int B[A];
    for (i = A - 1 , j = 0 ; i >= 0 , j < A; i-- , j++) {
        B[j] = T[i];
    }
    printf("Inverse tavleau : ");
    for (i = 0; i < A; i++) {
        printf("%d ", B[i]);
    }
    return 0;
}

