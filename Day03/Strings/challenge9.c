#include <stdio.h>

int main() {
    
    char c[100];
    printf("Entrer une chaîne de caractère => ");
    fgets(c, sizeof(c) , stdin);
    
    int n_value ;
    for (int i = 0 ; i < 100 ; i++){
       if (c[i] == '\0') { 
          n_value = i;
          break;
       }
    }
    int t;
    for (int j = 0; j < 100; j++)
    {
        if (c[j] == ' ') {
            for (int y = j ; y<100 ; y++) 
            {
            t = c[y];
            c[y] = c[y + 1];
            c[y + 1] = t;
            }
        }
    }
    for (int z = 0 ; z < n_value ; z++)
    {
        printf("%c", c[z]);
    }
    return 0;
}