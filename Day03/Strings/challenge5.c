#include <stdio.h>

int main() {
   char str1[100];
   printf("=> ");
   scanf("%s", str1);
   int n_value ;
   for (int i = 0 ; i < 100 ; i++){
       if (str1[i] == '\0') { 
          n_value = i;
          break;
       }
   }
    
   for (int s = n_value - 1 ; s >= 0 ;s--)
   {    
       
       printf("%c", str1[s]);
   }
    
    return 0;
}