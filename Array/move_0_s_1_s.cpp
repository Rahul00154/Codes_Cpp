#include <bits/stdc++.h>
using namespace std;

void moveZeroes(int arr[],int size){

    int start = 0;
    int end = size - 1;
    while(start<end){

      if(arr[start]==0){
        start++;
      }
      if(arr[end]==1){
        end--;
      }
      else
      swap(arr[start],arr[end]);
    } 
}

void printArray(int arr[],int size){

  cout<<"Array after segragation"<<endl;

  for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){

    int arr[100];
    int size;
    
    cout<<"Enter size of array";
    cin>>size;

    cout<<"Enter elements of array";

    for(int i=0; i<size; i++){

      cin>>arr[i];
    }

    moveZeroes(arr,size);

    printArray(arr,size);

return 0;
}