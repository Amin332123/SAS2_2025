#include <stdio.h>
#include <string.h>
int main() {
    char c[100], cp[10];
    printf("Entrer un caractére : ");
    scanf("%s", &cp);
    printf("Entrer une chaîne de caractère => ");
    scanf(" %[^\n]", c);
    
    char *p = strstr(c , cp);
    if (p) {
        printf("on le trouve");
    } else {
        printf("il n'est pas trouvé");
    }
    return 0;
}