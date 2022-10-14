#include <stdio.h>
int printCommon(int arr1[], int len1, int arr2[], int len2){
  int i=0, j=0;
  while(len1 > i && len2 > j){
    if(arr1[i] < arr2[j]){
      i++;
    }
    else if(arr2[j] < arr1[i]){
      j++;
    }
    else{
      printf("\nCommon element is %d", arr1[i]);
      i++;
      j++;
    }
      
  }
}
int main(void){
  int arr1[] = { 2, 6, 4, 9, 10};
  int arr2[] = { 1, 2, 5, 4};
  int len1 = 5;
  int len2 = 4;
  printCommon(arr1, len1, arr2, len2);
}