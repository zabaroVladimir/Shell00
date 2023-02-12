#include <stdio.h>

int main ()
{
   int a;
   printf("Enter value:");
   scanf("%d", &a);
   if (a < 0){
     printf("N\n");
   }
   if (a == 0){
     printf("You entered zero, zero is zero :)\n");
   }
   if (a > 0){
     printf("P\n");
   }
    
}
