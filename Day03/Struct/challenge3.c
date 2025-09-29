#include <stdio.h>
typedef struct {
    int longeur ;
    int largeur ;
} Laire ; 
void a(int *x , int *y) {
    printf("l\'aire : %d", *x * *y);
}
int main() {
    Laire s1;
    printf("lon : ");
    scanf("%d", &s1.longeur);
    printf("lar : ");
    scanf("%d", &s1.largeur);
    a(&s1.longeur , &s1.largeur);
    return 0;
}