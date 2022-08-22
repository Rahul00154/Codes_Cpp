#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size){
 int start=0;

 int end=size-1;
 while(start<=end){

   swap(arr[start],arr[end]);
 
   start++;
   end--;
 }

}
void print_array(int arr[],int size){

  for(int i=0; i<size; i++){

  cout<<arr[i]<<" ";

}
cout<<endl;
}


int main(){

int n;

int arr[100];

cout<<"Enter Size of Array"<<endl;

cin>>n;

cout<<"Enter Element of array "<<endl;
 
  for(int i=0; i<n; i++){

  cin>>arr[i];
  
}
 
 reverse(arr,n);

 print_array(arr,n);
 
return 0;

}