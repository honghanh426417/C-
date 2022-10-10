/*
*MENU phep toan 
*/
#include<stdio.h>

int main(){
  int a, b;
  scanf("%d%d", &a, &b);
  printf("\nNhap vao so thu nhat:", a);
  printf("\nNhap vao so thu hai:", b);
  
  int ch;
  
  printf("\t\tMenu\n");
    printf("==================================\n");
    printf("\n +");
    printf("\n - ");
    printf("\n *");
    printf("\n /");
    printf("\n==================================");
    printf("\nEnter your choice: ");
    scanf("\n %d", &ch);
    switch(ch){
      case '+': {
        printf("\n%d",  a + b);
        break;
      }
      case '-': {
        printf("\n%d", a - b);
        break;
      }
      case '*': {
        printf("\n%d", a * b);
        break;
      }
      case '/': {
        printf("\n%d", a / b);
        break;
      }
      
    
    default:
    printf("\nChon sai ");
    break;
    }
    
    
}
  
  