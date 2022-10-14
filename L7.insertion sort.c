#include<stdio.h>
void main(){
  int arr[100];
  int n;
  int i, j, tmp;
  printf("Enter number of elements:");
  scanf("%d",&n);
  for(int i = 0;i < n; i++);
  {
    printf("Enter element number %d:", i+1);
    scanf("%d",&arr[100]);
  }
  //insertion sort
  for(i = 1; i < n; i++){
    tmp = arr[i];
    j = i - 1;
    while ( j >= 0 && tmp < arr[i]){
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = tmp;
  }
  printf("Sorted array:\n");
  for(int i = 0; i < n; i++){
    printf("%d\t", arr[i]);
  }
}