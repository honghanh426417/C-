#include<iostream>
using namespace std;
int main(){
  int n;
  for( int i = 31; i >= 0; i --){
    int k = n >> 1;
    if( k & 1)
    cout << " 1";
    else
    cout<< "0";
  }
}