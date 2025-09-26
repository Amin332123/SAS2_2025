#include <stdio.h>

int main() {
    char C_C[100], c;
    printf("Entrer un caractére : ");
    scanf("%c", &c);
    printf("Entrer une chaîne de caractère => ");
    scanf(" %[^\n]", C_C);
    int count = 0 ;
    for (int i = 0 ; i <100; i++)
    {
        if (C_C[i] == c) 
           count++;
    }
    printf("%d",count);  
    return 0;
}


