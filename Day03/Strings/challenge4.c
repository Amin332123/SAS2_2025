#include <stdio.h>
#include <string.h>
int main() {
    char str1[100];
    char str2[100];
    printf("=> ");
    scanf(" %[^\n]", str1);
    
    printf("=> ");
    scanf(" %[^\n]", str2);
    
    int s = strcmp(str1, str2);
    if (s == 0) {
        printf("elles sont égales");
    } else {
        printf("elles sont pas égales");
    }
        
    
    return 0;
}
