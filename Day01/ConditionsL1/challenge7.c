#include <stdio.h>

int main() {
    char A_Z;
    printf("Entrer un caractére (A => Z) : ");
    scanf("%c", &A_Z);
    
    if (A_Z >= 65 && A_Z <= 90) {
        printf("%c est un alphabet majuscule", A_Z);
        
    } else {
        printf("ce n\'est pas un alphabet majuscule");
    }
    return 0;
    
}
