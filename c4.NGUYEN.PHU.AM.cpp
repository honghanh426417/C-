/*
*Nhập kys tự là nguyên âm hay phụ âm
*/
#include<stdio.h>

int main(){
  char ch;
  printf("Nhap ky tu");
  scanf("%c", &ch);
  
  if(( ch < 'A') && ( ch > 'Z')) {
    printf("\nKy tu khac");
  }
  else if(( ch < 'a') && (ch > 'z')) {
    printf("\nKy tu khac");
  }
  else{
    switch(ch){
      case 'U':
      case 'u':
      case 'E':
      case 'e':
      case 'O':
      case 'o':
      case 'A':
      case 'a':
      case 'I':
      case 'i':
      printf("\nDay la nguyen am");
      break;
      
      default:
      printf("\nDay la phu am");
      break;
    }
}
}