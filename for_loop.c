#include <stdio.h>
 
int main() {
   int i, start, end;
 
   start = 1;
   end = 10;
    
   printf("In cac so theo thu tu tang dan:\n");
   for(i = start; i <= end; i++) 
      printf("%2d\n", i);
 
   return 0;
}
