/*
*Giải pt bậc 2 ax^2 + bx +c = 0 
*/
#include<stdio.h>
#include<math.h>
int main(){
  int a, b, c;
  int temp;//biến đổi chỗ
  printf("Nhap vao 3 so:");
  scanf("%d%d%d", &a, &b, &c);
  
  if(a > b){
    temp = a;
    a = b;
    temp = b;
  } 
  else if(a > c){
    temp = a;
    a = c;
    temp = c;
    
  }
  else (b > c);{
  temp = b;
  b =c;
  temp = c;
  }
  printf("\n%d  %d  %d ", a ,b ,c);
  getc;
  
}
  
  