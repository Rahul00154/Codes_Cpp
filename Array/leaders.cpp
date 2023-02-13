#include <bits/stdc++.h>
using namespace std;

void leaders(int arr[], int size){
  
  int curr = arr[size-1];

  cout<<curr<<" ";

  for(int i = size-2;i>=0;i--){
      if(arr[i]>curr){
         curr = arr[i];
         cout<<curr<<" ";
      }
  
  }
  
}

int main(){

   int arr[5] = {2,7,3,6,5};

   leaders(arr,5);

return 0;
}