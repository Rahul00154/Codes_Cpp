#include <bits/stdc++.h>
using namespace std;

//By Moore's algorithm

int majorityElement(int arr[],int size){

    int element = 0;
    int count = 0;
    for(int i = 0; i < size;i++){
      if(count==0){
          element = arr[i];
      }
      if(element == arr[i]){
          count++;
      }
      else
          count--;
    }
    count = 0;
    for(int i = 0; i < size; i++){
      if(element == arr[i]){
          count++;
      }
    }
    if(count>size/2){
      return element;
    }
    else
       return -1;
}

int main(){

  int arr[100];
  int size;
  cout<<"Enter size of the array ";
  cin>>size;
  
  cout<<"Enter Elements of array";
  for(int i = 0; i <size;i++){
     cin>>arr[i];
  }

  int ans=majorityElement(arr,size);
  
  cout<<ans;

return 0;
}