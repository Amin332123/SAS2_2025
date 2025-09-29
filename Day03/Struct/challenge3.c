#include <stdio.h>
typedef struct {
    int longeur ;
    int largeur ;
} Laire ; 
int a(Laire *s) {
    return s->longeur * s->largeur;
    

}
int main() {
    Laire s;
    printf("lon : ");
    scanf("%d", &s.longeur);
    printf("lar : ");
    scanf("%d", &s.largeur);
    Laire *pts = &s;
    
    printf("L\'aire : %d", a(pts));

    return 0;
}