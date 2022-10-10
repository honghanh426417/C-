/*
*Giải pt bậc 2 ax^2 + bx +c = 0 
*/
#include<stdio.h>
#include<math.h>
int main(){
  float m, mm, cm, dm, km;
  printf("Nhap do dai: %2f", m);
  scanf("%2f", &m);
  mm = m / 1000;
  cm = m / 100;
  dm = m * 100;
  km = m * 1000;
  printf("\nDo dai don vi mm : %8.4f", mm);
  printf("\nDo dai don vi cm : %8.2f", cm);
  printf("\nDo dai don vi dm : %8.2f", dm);
  printf("\nDo dai don vi km : %8.2f", km);
}
  
  