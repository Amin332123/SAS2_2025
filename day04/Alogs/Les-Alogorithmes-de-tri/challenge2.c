#include <stdio.h>

int main() {
    int n;
    printf("Entrer n  (n nombre element de tableau) : ");
    scanf("%d", &n);
    int T[n];
    for (int i = 0 ; i< n ; i++)
    {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
    int  i , j , k; 
    for (int i = 1 ; i<n ; i++)
    {
        k = T[i];
        j = i - 1;
        while( j >= 0 && T[j] > k)
        {
            T[j + 1] = T[j];
            j--;
        }
        T[j + 1] = k;
    }
    for (int i = 0 ; i < n ; i++)
    {
        printf("%d ", T[i]);
    }
    return 0;
}