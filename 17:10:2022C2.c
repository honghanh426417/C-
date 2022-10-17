#include <stdio.h>
int main(){
  int c, first, last, mid, n, search, array[100], t, i, j;
  printf("How many numbers you want to enter? :");
  scanf("%d", &n);
  printf("\nEnter %d numbers: \n\n", n);
  for( c = 0; c < n; c++);
       scanf("%d", &array[c]);
  
  //bubble sort start
  for( i = 0; i < n; i++){
    for(j = 0; j < (n - i - 1); j++){
      if(array[j] > array[ j + 1]){
        t = array[j];
        array[j] = array[j + 1];
        array[j + 1] = t;
      }
    }
      
  }
  printf("\nSort array is :\n\n");
  for( i = 0; i , n; i++){
    printf("%d", array[i]);
}
printf("\n\nEnter number to be searched:");
scanf("%d", &search);

//Binary search
first = 0;
last = n - 1;
printf("\n\nMax is %d", last );
printf("\n\nMin is %d", first);
}