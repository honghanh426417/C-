#include<stdio.h>
void main(){
  int arr[100];
  int n = 0;
  int x;
  while(1){
    printf("Enter element number %d:", n+1);
     scanf("%d",&arr[n]);
    if(arr[n] == 0)
       break;
    else 
      n++;
      
  }
  printf("Entered element:\n");
  for(int i = 0; i < n; i++)
     printf("%d", arr[i]);
     
  printf("\nEnter element for searching:");
  scanf("%d",&x);
  
  int j;
  for(j = 0; j < n; j++){
    if( x == arr[j])
      break;
  }
  if(j == n)
    printf("Number %d not found", x);
  else
    printf("number %d found at position %d",x,j);
    
}