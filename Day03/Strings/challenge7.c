#include <stdio.h>

int main() {
    // (A_Z) from 65 TO 90 (a_z) from 97 to 122
    char c[100];
    printf("Entrer une chaîne de caractère => ");
    scanf(" %[^\n]", c);
    
    int n_value ;
    for (int i = 0 ; i < 100 ; i++){
       if (c[i] == '\0') { 
          n_value = i;
          break;
       }
    }
    for (int i = 0  ; i < n_value ; i++)
    {
        if (c[i] >= 65 && c[i] <= 90) {
            continue;
        } else if (c[i] >= 97 && c[i] <= 122) {
            c[i] -= 32;
        }
    }
    for (int i = 0 ; i< n_value ; i++) 
    {
        printf("%c", c[i]);
    }
    return 0;
}
