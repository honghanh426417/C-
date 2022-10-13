#include<stdio.h>
int main(){
  int i, j, rows;
  printf("\nBan muon bao nhieu hang: ");
  scanf("%d", &rows);
  
  for(i = 1;i <= rows; i++){
    for(j = 0; j <= i; j++ ){
      printf("*");
    }
    printf("\n");
  }
}
//1 lan chay i se chay 5 lan j