#include <stdio.h>
int main() {
    char str[100];
    printf("=> ");
    scanf(" %[^\n]", str);
    int str_len = 0;
    for (int i = 0 ; i < 100 ; i++) {
        if (str[i] == '\0' ) {
            
            break;
        }
        str_len++;
    } printf("%d", str_len);
    return 0;
}
