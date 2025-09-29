
#include <stdio.h>

int main() {
    int n, i;
    printf("Entrer n : ");
    scanf("%d", &n);
    int T[n];
    for (i = 0 ; i < n ; i++)
    {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    
    for (i = 0 ; i < n - 1 ; i++)
    {
        for (int j = 0 ; j < n - i - 1 ; j++ )
        {
             if (T[j] > T[j + 1])
             {
                 int t;
                 t = T[j];
                 T[j] = T[j + 1];
                 T[j + 1] = t;
             }
        }
    }
    for (i = 0 ; i < n ; i++)
    {
        printf("%d ", T[i]);
    }
    return 0;
}