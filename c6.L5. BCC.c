#include <stdio.h>
int main()
{
   printf("\nBang cuu chuong\n");
   
   for( int i = 1; i < 10;i++){
     for(int j = 0; j < 10; j++){
       printf("\t%d x %d = %d\n", i, j, i*j);
     }
   }
}