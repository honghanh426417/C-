/*
* Kiểm tra chữ hoa, chữ thường, chữ số hay kí tự khác
*/
#include<stdio.h>
int main() {
  char ch;
  scanf("%c", &ch);
  printf("Nhap vao ky tu ");
  
  if(( ch >= 'A') && (ch <= 'Z')) {
    printf("\nDay la chu viet hoa");
  }
  else if(( ch >= 'a') && (ch <= 'z')) {
    printf("\nDay la chu viet thuong");
  }
  else if(( ch >= '0') && (ch <= '9')) {
    printf("\nDay la chu so");
  }
  else{
    printf("\nKy tu khac");
  }
  return 0;
    
}
