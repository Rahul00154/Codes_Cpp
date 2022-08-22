#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int size){

for (int i = 1; i < size; i++)
{
  int temp= arr[i];
  
  int  j = i-1;
  
  for (; j>=0; j--)
  {
    if(arr[j]>temp){
      
      arr[j+1]=arr[j];
    
    }
    else{
    
      break;
    
    }
  }
  
  arr[j+1]=temp;
  

}



}

void printArray(int arr[],int size){

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
 
 for(int i=0;i<size;i++){
 
   cin>>arr[i];
 
 }
 
 insertionSort(arr,size);
 
 printArray(arr,size);

return 0;
}