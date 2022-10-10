#include<stdio.h>
int main(){
  int i;
  scanf("%d", &i);
  for( int i = 1; i <= 100; i++ ){
    if (i % 2 ==0){
      printf(" %d ");
    }
  }

  
  return 0;
}