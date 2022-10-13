#include<iostream>
using namespace std;
int main(){
  char kt;
  scanf("%c", &kt);
  
  if(kt >= 65 && kt <=90){
    printf("%c la chu viet hoa", kt);
    
  }
  else if( kt >= 97 && kt <= 122){
    printf("%c la chu viet thuong", kt);
  }
  else if( kt >= '0' && kt <= '9'){
    printf("%c la ki tu so", kt);
  }
  else{
    printf("%c la ky tu khac", kt);
}
}


