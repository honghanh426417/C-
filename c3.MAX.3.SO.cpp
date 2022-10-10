/*
* Tìm số lớn nhất trong 3 số
*/
#include<stdio.h>

int main(){
  int num1,num2, num3;
 printf("\nNhap 3 so nguyen");
 scanf("%d%d%d", &num1, &num2, &num3);
 if(num1 > num2){
   if(num1 > num3){
     printf("\n%d la so lon nhat", num1);
   }
   else{
     printf("\n%d la so lon nhat", num3);
   }
 }
   else{
     if(num2 > num3){
       printf("\n%d la so lon nhat", num2);
     }
   }
  
}
 
