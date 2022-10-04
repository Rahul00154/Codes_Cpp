#include <bits/stdc++.h>
using namespace std;
 
 void rotatedArray(int arr[],int size,int key){
 
  for(int i=key;i<size;i++){

    cout<<arr[i]<<" ";
  }
  for(int i=0;i<key;i++){
    
    cout<<arr[i]<<" ";
  }

 }

/*
void reverse(int arr[],int size,int d){

    d=d%size;
    reverse(arr,0,d-1);
    reverse(arr,d-1,size);
    reverse(arr,0,size-1);

}
*/

int main(){
 
 int size;
 
 
 cout<<"Enter Size Of Array \n";
 
 cin>>size;
 
 int arr[100];
 
 cout<<"Enter Elements of array ";
 
 for(int i=0;i<size;i++){
   
   cin>>arr[i];
   
    }
   int key;
 
   cout<<"Enter Key To rotate \n";
 
   cin>>key;
   
   rotatedArray(arr,size,key);
   


return 0;
}