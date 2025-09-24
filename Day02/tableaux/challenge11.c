#include <stdio.h>
int main() {
    int n , i ;
    printf("Entrer le nombre de element : ");
    scanf("%d", &n);
    int array[n];
    for (i = 0 ; i < n ; i++) {
        
        printf("n[%d] : ", i);
        scanf("%d", &array[i]);
    }
    int a,b;
    printf("Entrez la valeur que vous souhaitez modifier : ");
    scanf("%d", &a);
    printf("Entrez la nouvelle valeur :");
    scanf("%d", &b);
    for (i = 0 ; i < n ; i++) {
        if(array[i] == a) {
            array[i] = b;
        }
    }
    for (i = 0 ; i < n ; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}