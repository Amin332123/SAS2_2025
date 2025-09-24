#include <stdio.h>
int main() {
    int T[5] = {1, 4, 5, 88, 2}, J[5], i;
    for (i = 0 ; i < 5 ; i++) {
        J[i] = T[i];
    }
    printf("=> tableau original : ");
    for (i=0;i<5; i++) {
        printf("%d ", T[i]);
    } 
    printf("\n=> tableau copié    : ");
    for (i=0;i<5; i++) {
        printf("%d ", J[i]);
    } 
    return 0;
}
