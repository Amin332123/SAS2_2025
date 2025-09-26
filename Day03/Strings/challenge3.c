#include <stdio.h>
int main() {
    char str1[100] = "Bonjour ";
    char str2[100] = "Amine";
    for (int i = 8, j = 0  ; i < 100, j<100 ; i++, j++) {
        str1[i] = str2[j];
        }
    printf("%s", str1);
    
    return 0;
}