/*
*Nhập vào 2 số nguyên xem có là ước của nhau không 
*/
#include<stdio.h>
#include<math.h>
int main(){
  int num1, num2;
  printf("Nhap vao 2 so");
  scanf("%d%d", &num1, &num2);
  
  if( num1 % num2 == 0){
    printf("\n%d la uoc cua %d", num2, num1);
  }
  else if( num2 % num1 ==0){
    printf("\n%d la uoc của %d", num1, num2);
  }
  else {
    printf("\nKhong phai uoc cua nhau");
  }
}
  
  