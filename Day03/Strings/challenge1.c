#include <stdio.h>
int main() {
    char str[100];
    printf("=> ");
    scanf(" %[^\n]", str);
    printf("%s", str);
    return 0;
}
