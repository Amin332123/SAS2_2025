#include <stdio.h>
int main() {
    char voyel;
    printf("entrer un caractère ( minuscule )  : ");
    scanf("%c", &voyel);
    switch (voyel) {
        case 'a' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'e' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'i' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'o' :
           printf("oui , %c est un voyel", voyel);
           break;
        case 'u' :
           printf("oui , %c est un voyel", voyel);
           break;
        default : 
           printf("Non , %c est pas un voyel", voyel);
           break;
    }
    return 0;
}

