#include <stdio.h>
int main() {
    char charr;
    printf("Entrer un caractére : ");
    scanf("%c", &charr);
    if (charr >= 65 && charr <= 90){
        printf("%c est majuscule", charr);
    } else if (charr >= 97 && charr <= 122 ) {
        printf("%c est minuscule ", charr);
    } else {
        printf("%c n\'est pas un caractére", charr);
    }
    return 0;
}
