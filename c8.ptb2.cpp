/*
*Giải pt bậc 2 ax^2 + bx +c = 0 
*/
#include<stdio.h>
#include<math.h>
int main(){
  float a, b, c, d;
  printf("Nhap vao pt:");
  scanf("%f%f%f", &a, &b, &c);
  
  if(a == 0){
    printf("\nDay khong phai pt bac2");
  }
  else{
    d = b * b - 4*a*c;
    if ( d < 0){
      printf("\nPt vo nghiem");
    }
    else if( d = 0){
      printf("\nPt co nghiem duy nhat : %f", -b/(2*a));
    }
    else{
      printf("\nPt co nghiem pb: %f,%f", (-b-sqrt(d))/(2*a), (-b+sqrt(d))/(2*a) );
    }
}
}
  
  